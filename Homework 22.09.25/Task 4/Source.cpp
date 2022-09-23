#include <iostream>

int main(int argc, char* argv[])
{
	int v = 0;
	int t = 0;
	int s = 0;

	std::cout << "Enter speed - ";
    std::cin >> v;

	std::cout << "Enter time - ";
	std::cin >> t;

	s = (((v * t) % 109) + 109) % 109;

	std::cout << "Vasya stopped at " << s << std::endl;

	return EXIT_SUCCESS;
}