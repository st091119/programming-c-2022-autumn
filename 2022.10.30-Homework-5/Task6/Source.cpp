#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[100]{ 0 };
	int b = 0;
	int max = 0;
	int maxn = 0;

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		std::cin >> b;

		if ((a[i] * b) > max)
		{
			max = a[i] * b;
			maxn = i;
		}
	}

	std::cout << maxn + 1;

	return EXIT_SUCCESS;
}