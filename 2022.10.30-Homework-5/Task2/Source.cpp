#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = -1001;
	int l = 0;
	int r = 0;
	int ind = 0;
	int a[1000]{ 0 };

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	std::cin >> l >> r;

	for (int i = l - 1; i < r; ++i)
	{
		if (a[i] > k)
		{
			k = a[i];
			ind = i;

		}
	}

	std::cout << k << " " << ind + 1;

	return EXIT_SUCCESS;
}