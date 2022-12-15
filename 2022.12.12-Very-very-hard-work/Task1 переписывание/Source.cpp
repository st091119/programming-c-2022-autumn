#include <iostream>

void del(int** arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

int** spiral(int** a, int n, int x, int y, int k, int otstup)
{
	if (k > n * n)
	{
		return a;
	}

	if ((x == otstup - 1) && (y < n - otstup))
	{
		if (a[x][y] == 0)
		{
			a[x][y] = k;
			return spiral(a, n, x, ++y, ++k, otstup);
		}
		else
		{
			a[++x][++y] = k;
			return spiral(a, n, x, ++y, ++k, ++otstup);
		}
	}
	else if ((x < n - otstup) && (y == n - otstup))
	{
		a[x][y] = k;

		return spiral(a, n, ++x, y, ++k, otstup);
	}
	else if ((x == n - otstup) && (y > otstup - 1))
	{
		a[x][y] = k;

		return spiral(a, n, x, --y, ++k, otstup);
	}
	else if ((x >= otstup) && (y == otstup - 1))
	{
		a[x][y] = k;

		return spiral(a, n, --x, y, ++k, otstup);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	int** arr = new int* [n];

	for (int i = 0; i < n; ++i)
	{
		arr[i] = new int[n] {0};
	}

	arr = spiral(arr, n, 0, 0, 1, 1);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cout << arr[i][j] << " ";
		}

		std::cout << std::endl;
	}

	del(arr, n);

	return EXIT_SUCCESS;
}