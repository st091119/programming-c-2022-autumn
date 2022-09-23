#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	std::cout << "Enter a number named a - ";
	std::cin >> a;

	std::cout << "Enter a number named b - ";
	std::cin >> b;

	c = a;
	a = b;
	b = c;

	std::cout << "The value of a - " << a << std::endl;

	std::cout << "The value of b - " << b;

	return EXIT_SUCCESS;
}