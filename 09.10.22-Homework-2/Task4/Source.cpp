#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	std::cin >> a >> b >> c >> d;

	//std::cout << ((a == 0 && b == 0) ? "INF" : (b % a == 0) ? ("" + (-b / a)) : "NO");

	if (a == 0 && b == 0)
	{
		std::cout << "INF";
	}
	else if (b % a == 0)
	{
		std::cout << (-b / a);
	}
	else
	{
		std::cout << "NO";
	}

	return EXIT_SUCCESS;
}