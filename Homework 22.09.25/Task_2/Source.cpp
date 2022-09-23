#include <iostream>

int main(int argc, char* argv[])
{
	int N = 0;
	int K = 0;

	std::cout << "Enter amount of pupils - ";
	std::cin >> N;

	std::cout << "Enter amount of apples - ";
	std::cin >> K;

	std::cout << "Amount of apples for one student is " << K / N << std::endl;

	return EXIT_SUCCESS;

}