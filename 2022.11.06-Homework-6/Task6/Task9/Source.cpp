#include <iostream>

int main(int argc, char* argv[])
{
	int a[100]{ 0 };
	int max = 0;
	int kmax = -10;
	int sum = 0;
	int k = 0;
	int n = 0;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] >= kmax)
		{
			kmax = a[i];
			max = i;
		}
	}

	sum += kmax * (max + 1);

	while (max + 1 != n)
	{
		kmax = -10;
		k = max;

		for (int i = k + 1; i < n; i++)
		{
			if (a[i] >= kmax)
			{
				kmax = a[i];
				max = i;
			}
		}

		sum += (max - k) * kmax;

	}

	std::cout << sum;

	return EXIT_SUCCESS;
}