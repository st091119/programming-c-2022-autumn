#include <iostream>

void hanoi(int count, int from, int to)
{
	if (count <= 0)
	{
		return;
	}

	int tmp = 6 - from - to;

	hanoi(count - 1, from, tmp);

	std::cout << count << " " << from << " " << to << std::endl;

	hanoi(count - 1, tmp, to);
}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	hanoi(n, 1, 3);

	return EXIT_SUCCESS;
}