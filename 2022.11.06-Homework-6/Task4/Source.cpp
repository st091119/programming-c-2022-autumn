#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int n = 0;
	int chi = 0;
	int arr[1000]{ 0 };

	std::cin >> n >> a >> b >> c >> d;

	for (int i = 0; i < n; ++i)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < (b - a + 1) / 2; ++i)
	{
		chi = arr[i + a - 1];
		arr[i + a - 1] = arr[b - 1 - i];
		arr[b - 1 - i] = chi;
	}

	for (int i = 0; i < (d - c + 1) / 2; ++i)
	{
		chi = arr[i + c - 1];
		arr[i + c - 1] = arr[d - 1 - i];
		arr[d - 1 - i] = chi;
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << arr[i] << " ";
	}

	return EXIT_SUCCESS;
}