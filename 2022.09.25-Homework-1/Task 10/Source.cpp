#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;

	std::cin >> a >> b;

	std::cout << ((a + b) + ((a - b) * (a - b) / (a - b))) / 2 << std::endl;

	return EXIT_SUCCESS;
}