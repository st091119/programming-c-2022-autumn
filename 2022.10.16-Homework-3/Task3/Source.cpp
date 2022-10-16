#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 1;
	int l = 1;
	std::cin >> n;

	do
	{
		do
		{
			std::cout << l << " ";
			l = l + 1;
		} while (l != n + k);

		std::cout << std::endl;

		k = k + 1;
		l = k;
	} while (l != n + 1);

	return EXIT_SUCCESS;
}