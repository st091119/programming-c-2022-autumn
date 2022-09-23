#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;

	std::cout << "Enter the number - ";
	std::cin >> n;

	std::cout << "The next even number - " << ((n / 2) * 2 + 2) << std::endl;

	return EXIT_SUCCESS;
}