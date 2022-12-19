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
	int** b = array(n, m);
	int** c = array(n, m);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> b[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cout << c[i][j] << " ";
		}

		std::cout << std::endl;
	}

	del(a, n);
	del(b, n);
	del(c, n);

	return EXIT_SUCCESS;
}