#include <iostream>

int** array(int n)
{
	int** res = new int* [n];

	for (int i = 0; i < n; ++i)
	{
		res[i] = new int[n] {0};
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

	std::cin >> n;

	int** a = array(n);

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			std::cin >> a[n - j][n - i];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cout << a[i][j] << " ";
		}

		std::cout << std::endl;
	}

	del(a, n);

	return EXIT_SUCCESS;
}