#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int k = 0;
	int x = 0;
	std::cin >> a >> b >> c >> d >> e;

	for (x; x <= 1000; x++)
	{
		if (x != e)
		{
			if ((a * x * x * x + b * x * x + c * x + d) / (x - e) == 0)
			{
				k++;
			}
		}
	}
	std::cout << k;

	return EXIT_SUCCESS;
}