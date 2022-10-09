#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	switch (n % 4)
	{
	case 0: {
		if (n % 100 == 0)
		{
			if (n % 400 == 0)
			{
				std::cout << "YES";
				break;
			}
			else
			{
				std::cout << "NO";
				break;
			}
		}
		std::cout << "YES";
		break;
	}
	default: {
		std::cout << "NO";
		break;
	}
	}

	return EXIT_SUCCESS;
}