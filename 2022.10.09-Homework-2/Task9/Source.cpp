#include <iostream>

int main(int argc, char* argv[])
{
	int m = 0;
	int n = 0;
	int x = 0;
	int y = 0;
	std::cin >> m >> n >> x >> y;

	if (x > 1)
	{
		std::cout << "(" << x - 1 << ", " << y << ")";
	}

	if (x < m)
	{
		std::cout << "(" << x + 1 << ", " << y << ")";
	}

	if (y > 1)
	{
		std::cout << "(" << x << ", " << y - 1 << ")";
	}

	if (y < n)
	{
		std::cout << "(" << x << ", " << y + 1 << ")";
	}
}