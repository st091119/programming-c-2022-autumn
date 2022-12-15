#include<iostream>

int main(int arg, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	std::cin >> a >> b >> c;

	if ((a + b <= c) || (b + c <= a) || (a + c <= b))
	{
		std::cout << "impossible";
	}
	else if ((a * a + b * b == c * c) || (a * a > b * b == c * c) || (b * b > a * a == c * c))
	{
		std::cout << "right";
	}
	else if ((a * a + b * b > c * c) && (a * a < b * b + c * c) && (b * b < a * a + c * c))
	{
		std::cout << "acute";
	}
	else
	{
		std::cout << "obtuse";
	}

	return EXIT_SUCCESS;
}