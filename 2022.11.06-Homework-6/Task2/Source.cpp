#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int a[1000]{ 0 };
	int b[100]{ 0 };
	int c[100]{ 0 };

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	std::cin >> m;

	for (int i = 0; i < m; ++i)
	{
		std::cin >> b[i] >> c[i];
	}

	for (int i = 0; i < m; ++i)
	{
		while (b[i] <= c[i])
		{
			std::cout << b[i] << " ";
			b[i] += 1;
		}
		std::cout << std::endl;
	}

	return EXIT_SUCCESS;
}