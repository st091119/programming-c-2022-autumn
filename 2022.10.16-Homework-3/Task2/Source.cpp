#include <iostream>

int main(int argc, char* argv[])
{
	int k = 0;
	int n = 0;

	std::cin >> n;
	while (n != 0)
	{
		if ((n < 0) && (n % 2 != 0))
		{
			k = k + 1;
		}
		std::cin >> n;
	}

	std::cout << k;

	return EXIT_SUCCESS;
}