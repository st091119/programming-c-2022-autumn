#include <iostream>

int main(int argc, char* argv[])
{
	int i = 0;

	std::cin >> i;

	std::cout << (i / 100) + (i % 100 / 10) + (i % 100 % 10) << std::endl;

	return EXIT_SUCCESS;
}