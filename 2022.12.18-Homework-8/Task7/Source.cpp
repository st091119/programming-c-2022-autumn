#include <iostream>

char f(char s[], int i)
{
	if (s[i + 1])
	{
		std::cout << s[i] << "*";
		return f(s, ++i);
	}

	else
	{
		std::cout << s[i];
		return 0;
	}
}

int main(int argc, char* argv[])
{
	char st[1000] = "";

	std::cin.getline(st, 1000);

	f(st, 0);

	return EXIT_SUCCESS;
}