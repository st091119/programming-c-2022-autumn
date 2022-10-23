#include <iostream>

int main(int argc, char* argv[])
{
	int n = 1;
	int k = 1;
	int s = 0;
	std::cin >> s;

	for (int i = 1;i <= s; i++)
	{
		std::cout << n << " ";
		if (k == n)
		{
			++n;
			k = 0;
		}
		++k;
	}

	return EXIT_SUCCESS;
}