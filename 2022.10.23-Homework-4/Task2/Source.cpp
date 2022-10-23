#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int k = 1;
	std::cin >> n;

	for (n; n > 0; n = n / 10)
	{
		if (n % 10 == 1)
		{
			m = k + m;
		}
		k = 2 * k;
	}
	std::cout << m;

	return EXIT_SUCCESS;
}