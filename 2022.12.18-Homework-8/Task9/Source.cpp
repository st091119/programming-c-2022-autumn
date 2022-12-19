#include <iostream>

int f(char st[], int i, int k, std::string s)
{
	if (i < k / 2)
	{
		if (st[i] != st[k - 1 - i])
		{
			std::cout << st[i];
			s = st[k - 1 - i] + s;
		}
		return f(st, ++i, k, s);
	}

	else if (i * 2 == k - 1)
	{
		std::cout << st[i];
	}

	std::cout << s;

	return 0;
}

int main(int argc, char* argv[])
{
	char str[255] = "";
	int len = 0;

	std::cin.getline(str, 255);

	len = strlen(str);

	f(str, 0, len, "");

	return EXIT_SUCCESS;
}