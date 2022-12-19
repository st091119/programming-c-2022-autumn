#include <iostream>

int** buf(int n)
{
	int** res = new int* [n];

	for (int i = 0; i < n; ++i)
	{
		res[i] = new int[2] {0};

		std::cin >> res[i][0] >> res[i][1];
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

int f(int** arr, int n, int t, int k)
{
	if (k == -1)
	{
		return t;
	}

	for (int i = 0; i <= n; ++i)
	{
		if (i == n)
		{
			k = -1;
			break;
		}

		if (arr[i][1] == k)
		{
			k = arr[i][0];
			break;
		}
	}

	return f(arr, n, ++t, k);
}

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;

	std::cin >> n;

	int** a = buf(n);

	std::cin >> k;

	std::cout << f(a, n, 0, k);

	del(a, n);

	return EXIT_SUCCESS;
}