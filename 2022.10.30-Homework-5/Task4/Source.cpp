#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int max = -1001;
	int a[1000]{ 0 };

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < n - 2; ++i)
	{
		if (a[i] + a[i + 1] + a[i + 2] > max)
		{
			max = a[i] + a[i + 1] + a[i + 2];
		}
	}

	if (a[0] + a[1] + a[n - 1] > max)
	{
		max = a[0] + a[1] + a[n - 1];
	}

	if (a[0] + a[n - 1] + a[n - 2] > max)
	{
		max = a[0] + a[n - 1] + a[n - 2];
	}

	std::cout << max;

	return EXIT_SUCCESS;

}