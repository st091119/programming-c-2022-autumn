#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
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

	ind = l - 1;
	for (int i = l - 1; i < r; ++i)
	{
		if (a[i] > a[l - 1])
		{
			a[l - 1] = a[i];
			ind = i;
		}
	}

	std::cout << a[l - 1] << " " << ind + 1;

	return EXIT_SUCCESS;
}