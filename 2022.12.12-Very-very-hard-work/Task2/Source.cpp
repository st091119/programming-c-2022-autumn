#include <iostream>

int* reverse(int i, int n, int* arr)
{
	if (i * 2 >= n)
	{
		return arr;
	}
	else
	{
		int b = arr[i];
		arr[i] = arr[n - i];
		arr[n - i] = b;
		return reverse(++i, n, arr);
	}
}

int main(int argc, char* argv[])
{
	int s = 0;

	std::cin >> s;

	int* a = new int[s] {0};

	for (int j = 0; j < s; j++)
	{
		std::cin >> a[j];
	}

	a = reverse(0, s - 1, a);

	for (int j = 0; j < s; ++j)
	{
		std::cout << a[j] << " ";
	}

	delete[] a;

	return EXIT_SUCCESS;
}