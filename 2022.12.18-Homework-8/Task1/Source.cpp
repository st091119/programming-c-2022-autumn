#include <iostream>

int min(int a, int b, int c, int d, int i, int arr[4])
{
	if (i >= 4)
	{
		return arr[0];
	}
	else
	{
		if (arr[i] < arr[0])
		{
			arr[0] = arr[i];
		}

		return min(a, b, c, d, ++i, arr);
	}
}

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	std::cin >> a >> b >> c >> d;

	int arr[4]{ a, b, c, d };

	std::cout << min(a, b, c, d, 0, arr);

	return EXIT_SUCCESS;
}