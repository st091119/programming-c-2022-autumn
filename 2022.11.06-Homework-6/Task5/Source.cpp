#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[100000]{ 0 };
	int k = 0;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];

		if (a[i] < a[k])
		{
			k = i;
		}
	}

	for (int i = k; i < n; i++)
	{
		std::cout << a[i] << " ";
	}

	for (int i = 0; i < k; i++)
	{
		std::cout << a[i] << " ";
	}

	return EXIT_SUCCESS;
}