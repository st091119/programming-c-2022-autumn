#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int x = 0;
	int k = 1;
	int d = 1;
	int a[100]{ 0 };

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	std::cin >> x;

	for (int i = 0; i < n; ++i)
	{
		if (x < a[i])
		{
			k += 1;
		}
		else
		{
			std::cout << k;
			d = 0;
			break;
		}
	}

	if (d == 1)
	{
		std::cout << k;
	}

	return EXIT_SUCCESS;
}