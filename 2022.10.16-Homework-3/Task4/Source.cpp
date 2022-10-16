#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int l = 1;
	int k = 1;
	int m = 0;
	std::cin >> n;

	do
	{
		do
		{
			std::cout << l;
			l = l + 1;
			m = m + 1;
		} while (l != n + 1);
		l = l - 1;

		while (m < n)
		{
			l = l - 1;
			std::cout << l;
			m = m + 1;
		}

		std::cout << std::endl;

		k = k + 1;
		l = k;
		m = 0;
	} while (l != n + 1);

	return EXIT_SUCCESS;
}