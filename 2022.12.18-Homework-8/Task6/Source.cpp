#include <iostream>

int max(std::string s, int n)
{
	if (s[n] > s[0])
	{
		s[0] = s[n];
	}
	if (n == 0)
	{
		return s[0];
	}
	return max(s, n - 1);
}

int main(int argc, char* argv[])
{
	std::string str;

	std::cin >> str;

	std::cout << max(str, size(str));

	return EXIT_SUCCESS;
}