#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int m1 = 0;
	int m2 = 0;
	int m3 = 0;
	std::cin >> a >> b >> c;

	if (a > b && a > c)
	{
		m1 = a;
		m2 = b;
		m3 = c;
	}
	else if (b > a && b > c)
	{
		m1 = b;
		m2 = a;
		m3 = c;
	}
	else if (c > a && c > b)
	{
		m1 = c;
		m2 = a;
		m3 = b;
	}
	else if (c = b = a)
	{
		m1 = m2 = m3 = a;
	}
	else if (a > b && b == c)
	{
		m1 = a;
		m2 = m3 = b;
	}
	else if (a == b && a > c)
	{
		m1 = m2 = a;
		m3 = c;
	}
	else if (b > a && a == c)
	{
		m1 = b;
		m2 = m3 = a;
	}
	else if (b == c && a < b)
	{
		m1 = m2 = b;
		m3 = a;
	}
	else if (c > b && a == b)
	{
		m1 = c;
		m2 = m3 = a;
	}

	if (a + b > c || a + c > b || b + c > a)
	{
		if (m2 * m2 + m3 * m3 > m1 * m1)
		{
			std::cout << "acute";
		}
		else if (m2 * m2 + m3 * m3 < m1 * m1)
		{
			std::cout << "obtuse";
		}
		else if (m2 * m2 + m3 * m3 == m1 * m1)
		{
			std::cout << "right";
		}
	}
	else
	{
		std::cout << "impossible";
	}

	return EXIT_SUCCESS;
}