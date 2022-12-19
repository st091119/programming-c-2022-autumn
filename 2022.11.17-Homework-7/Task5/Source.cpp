#include <iostream>

int** array(int n, int m)
{
	int** res = new int* [n];

	for (int i = 0; i < n; ++i)
	{
		res[i] = new int[m] {0};
	}

	return res;
}

void del(int** arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;

	std::cin >> n >> m;

	int** a = array(n, m);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			std::cin >> a[i][m - j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cout << a[i][j] << " ";
		}

		std::cout << std::endl;
	}

	del(a, n);

	return EXIT_SUCCESS;
}