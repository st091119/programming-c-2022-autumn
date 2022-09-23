#include <iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	int xx = 0;
	int xxxx = 0;

	std::cout << "Enter the number - ";
	std::cin >> x;

	xx = x * x;
	xxxx = xx * xx;

	std::cout << "Value is " << xxxx + xxxx / x + xx + x + 1 << std::endl;

	return EXIT_SUCCESS;
}