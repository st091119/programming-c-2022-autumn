#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	float m = 1;
	float x = 0;
	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		x = x + (1 / (i * m));
		m = i * m;
	}
	std::cout << x;

	return EXIT_SUCCESS;
}