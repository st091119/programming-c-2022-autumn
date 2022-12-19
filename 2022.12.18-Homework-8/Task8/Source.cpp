#include <iostream>

char f(char s[], int i, int k)
{
	if (i < k / 2 && i * 2 != k - 2)
	{
		std::cout << s[i] << '(';
		return f(s, ++i, k);
	}

	else if (i * 2 == k - 2)
	{
		std::cout << s[i] << s[i + 1];
		return f(s, i + 2, k);

	}

	else if (i * 2 == k - 1)
	{
		std::cout << s[i];
		return f(s, ++i, k);

	}

	else if (i < k)
	{
		std::cout << ')' << s[i];
		return f(s, ++i, k);
	}

	return 0;
}


int main(int argc, char* argv[])
{
	char st[1000] = "";

	std::cin.getline(st, 1000);

	f(st, 0, strlen(st));

	return EXIT_SUCCESS;
}