#include <iostream>

int main(int argc, char* argv[])
{
	int numb = 0;

	std::cout << "Enter the number, less then 10000 -  ";
	std::cin >> numb;

	std::cout << "The next number for the number " << numb << " is " << numb + 1 << "." << std::endl;

	std::cout << "The previous number for the number " << numb << " is " << numb - 1 << "." << std::endl;

	return EXIT_SUCCESS;

}