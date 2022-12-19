#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int x = 0;
	int k = 1;
	int a[100]{ 0 };

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	std::cin >> x;

	while (x <= a[k - 1])
	{
		k += 1;
	}

	std::cout << k;

	return EXIT_SUCCESS;
}