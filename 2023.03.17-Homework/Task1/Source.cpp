#include <iostream>

struct Point
{
	int x;
	int y;

	Point(int x = 0, int y = 0) : x(x), y(y) {}
	Point(const Point& p) : x(p.x), y(p.y) {}
	~Point() {}

};

int main(int argc, char* argv[])
{
	int n;
	int x;
	int y;

	std::cin >> n;

	Point** arr = new Point * [n] {};

	for (int i = 0; i < n; ++i)
	{
		std::cin >> x >> y;

		arr[i] = new Point(x, y);
	}

	for (int i = 0; i < n; ++i) 
	{

		for (int j = 0; j < n - i - 1; ++j) {

			if ((arr[j]->x * arr[j]->x + arr[j]->y * arr[j]->y) >= (arr[j + 1]->x * arr[j + 1]->x + arr[j + 1]->y * arr[j + 1]->y))
			{
				std::swap(arr[j]->x, arr[j + 1]->x);
				std::swap(arr[j]->y, arr[j + 1]->y);
			
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << arr[i]->x << " " << arr[i]->y << std::endl;
	}

	for (int i = 0; i < n; ++i)
	{
		delete arr[i];
	}
	delete[] arr;

	return EXIT_SUCCESS;
}