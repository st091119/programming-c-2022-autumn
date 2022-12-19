#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int l = 0;
	int a[100000]{ 0 };

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	std::cin >> k;

	if (k > 0)
	{
		l = n - k % n;
	}
	else
	{
		l = (-1) * k % n;
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << a[(i + l) % n] << " ";
	}

	return EXIT_SUCCESS;
}