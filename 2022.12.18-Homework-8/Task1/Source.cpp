#include <iostream>

int min(int a, int b, int c, int d)
{
	int arr[4]{ a, b, c, d };

	for (int i = 0; i < 4; ++i)
	{
		if (arr[i] < arr[0])
		{
			arr[0] = arr[i];
		}
	}

	return arr[0];
}

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	std::cin >> a >> b >> c >> d;

	std::cout << min(a, b, c, d);

	return EXIT_SUCCESS;
}