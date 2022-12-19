#include <iostream>

int f(int k, int n)
{
	if (k == n)
	{
		return 1;
	}
	else if (k > n)
	{
		return 0;
	}
	else
	{
		return (f(k + 3, n) + f(k + 5, n));
	}

}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	if (f(1, n) == 0)
	{
		std::cout << "NO";
	}
	else
	{
		std::cout << "YES";
	}

	return EXIT_SUCCESS;
}