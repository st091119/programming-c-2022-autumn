#include <iostream>

int main(int argc, char* argv[])
{
	int max = 0;
	int min = 0;
	int kmax = -101;
	int kmin = 101;
	int sum = 0;
	int a[100]{ 0 };
	int n = 0;
	int pr = 1;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];

		if (a[i] > 0)
		{
			sum += a[i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] > kmax)
		{
			kmax = a[i];
			max = i;
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] < kmin)
		{
			kmin = a[i];
			min = i;
		}
	}

	for (int i = min + 1; i < max; i++)
	{
		pr = a[i] * pr;
	}

	for (int i = max + 1; i < min; i++)
	{
		pr = a[i] * pr;
	}

	std::cout << sum << " " << pr;

	return EXIT_SUCCESS;
}