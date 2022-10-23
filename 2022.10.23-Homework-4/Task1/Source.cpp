#include <iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	int k = 2;
	std::cin >> x;

	for (int d = 2; d < x; d++)
	{
		if (x % d == 0)
		{
			k++;
		}
	}
	std::cout << k;

	return EXIT_SUCCESS;
}