#include <iostream>

int main(int argc, char* argv[])
{
	int m = 0;
	int n = 0;
	int a[100000]{ 0 };
	int chi = 0;

	std::cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		std::cin >> chi;

		if (a[chi] == 0)
		{
			a[chi] = 1;
		}
	}

	for (int i = 0; i < m; i++)
	{
		std::cin >> chi;

		if (a[chi] == 1)
		{
			a[chi] = 2;
		}
	}

	for (int i = 0; i < 100000; i++)
	{
		if (a[i] == 2)
		{
			std::cout << i << " ";
		}
	}

	return EXIT_SUCCESS;
}