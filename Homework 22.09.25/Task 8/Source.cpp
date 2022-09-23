#include <iostream>

int main(int argc, char* argv[])
{
	int h1 = 0;
	int m1 = 0;
	int s1 = 0;
	int h2 = 0;
	int m2 = 0;
	int s2 = 0;

	std::cout << "Enter a moment of time 1 (hms) - ";
	std::cin >> h1 >> m1 >> s1;
   
	std::cout << "Enter moment of time 2 - ";
	std::cin >> h2 >> m2 >> s2;

	std::cout << "Elapsed between two times - " << (h2 - h1) * 3600 + (m2 - m1) * 60 + (s2 - s1) << std::endl;

	return EXIT_SUCCESS;
}