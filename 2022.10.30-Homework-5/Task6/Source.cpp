#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	float a[100]{ 0 };
	float b[100]{ 0 };
	float max = 0;
	int maxn = 0;

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		std::cin >> b[i];

		if ((a[i] * b[i] / 100) > max)
		{
			max = a[i] * b[i] / 100;
			maxn = i + 1;
		}
	}

	std::cout << maxn;

	return EXIT_SUCCESS;
}