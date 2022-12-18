#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[100]{ 0 };
	int b[100]{ 0 };
	int maxn = 0;

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		std::cin >> b[i];
	}

	for (int i = 0; i < n; ++i)
	{
		if (a[i]*b[i] > a[0]*b[0])
		{
			maxn = i;
			a[0] = a[i];
			b[0] = b[i];
		}
	}

	std::cout << maxn + 1;

	return EXIT_SUCCESS;
}