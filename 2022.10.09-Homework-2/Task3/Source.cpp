#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int k = 0;
	int t = 0;
	std::cin >> k >> m >> n;

	if (n <= k)
	{
		std::cout << (t = 2 * m);
	}
	else
	{
		switch (2 * n % k)
		{
		case 0: {
			std::cout << (t = m * (2 * n / k));
			break;
		}
		default: {
			std::cout << (t = m * (2 * n / k + 1));
			break;
		}
		}

	}
	return EXIT_SUCCESS;
}