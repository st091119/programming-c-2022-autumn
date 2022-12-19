#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int tri[100]{ 0 };
	int ch[100]{ 0 };
	int d = 0;
	int b = 0;
	int n = 0;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> a;

		if (a % 2 == 0)
		{
			ch[b] = a;
			b++;
		}
		else
		{
			tri[d] = a;
			d++;
		}
	}

	for (int i = 0; i < d; i++)
	{
		std::cout << tri[i] << " ";
	}

	std::cout << std::endl;

	for (int i = 0; i < b; i++)
	{
		std::cout << ch[i] << " ";
	}

	std::cout << std::endl;

	if (d > b)
	{
		std::cout << "NO";
	}
	else
	{
		std::cout << "YES";
	}

	return EXIT_SUCCESS;
}