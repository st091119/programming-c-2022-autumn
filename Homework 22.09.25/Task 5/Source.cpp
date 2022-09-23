#include <iostream>

int main(int argc, char* argv[])
{
	int i = 0;

	std::cout << "Enter three-digit number - ";
	std::cin >> i;

	std::cout << "Sum of digits - ";
	std::cout << (i / 100) + (i % 100 / 10) + (i % 100 % 10) << std::endl;

	return EXIT_SUCCESS;
}