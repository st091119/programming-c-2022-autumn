#include <iostream>

std::string f(int i, int n)
{
	if (i * i > n)
	{
		return "prime";
	}
	else if (n % i == 0)
	{
		return "composite";
	}

	return f(++i, n);
}

int main(int argc, char* argv[])
{
	int m = 0;

	std::cin >> m;

	std::cout << f(2, m);

	return EXIT_SUCCESS;
}