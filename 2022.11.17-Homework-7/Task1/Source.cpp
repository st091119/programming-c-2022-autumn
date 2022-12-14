#include <iostream>

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

	int** a = new int* [n];
	int* str = new int[n] {0};
	int* sto = new int[m] {0};

	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[m] {0};
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> a[i][j];

			str[i] += a[i][j];
			sto[j] += a[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << str[i] << " ";
	}

	std::cout << std::endl;

	for (int i = 0; i < m; ++i)
	{
		std::cout << sto[i] << " ";
	}

	std::cout << std::endl << std::endl;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cout << a[i][j] << " ";
		}

		std::cout << std::endl;
	}

	del(a, n);
	delete[] str;
	delete[] sto;

	return EXIT_SUCCESS;
}