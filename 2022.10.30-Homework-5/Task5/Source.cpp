#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int x = 0;
	int min = 1001;
	int mine = 0;
	int a[1000]{ 0 };

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	std::cin >> x;

	for (int i = 0; i < n; ++i)
	{
		if ((x - a[i] >= 0) && (x - a[i] < min))
		{
			min = x - a[i];
			mine = a[i];
		}
		else if ((a[i] - x > 0) && (a[i] - x < min))
		{
			min = a[i] - x;
			mine = a[i];
		}

	}

	std::cout << mine;

	return EXIT_SUCCESS;
}