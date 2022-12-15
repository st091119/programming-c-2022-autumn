#include <iostream>

int main(int argc, char* argv[])
{
	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;
	std::cin >> x1 >> y1 >> x2 >> y2;

	std::cout << (x1 == x2 || y1 == y2 || (x1 - x2) * (x1 - x2) / (x1 - x2) == (y1 - y2) * (y1 - y2) / (y1 - y2) ?
		"YES" : "NO");

	return EXIT_SUCCESS;
}