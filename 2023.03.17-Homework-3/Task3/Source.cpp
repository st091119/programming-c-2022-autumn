#include <iostream>

struct Shape
{
public:
	int a;
	int b;
	int c;
	int d;

	Shape(int a = 0, int b = 0, int c = 0, int d = 0) : a(a), b(b), c(c), d(d) {};
	Shape(const Shape& sh) : a(sh.a), b(sh.b), c(sh.c), d(sh.d) {};
	~Shape() {};
};

struct Triangle : public Shape
{
	Triangle(int a = 0, int b = 0, int c = 0) : Shape(a, b, c) {};

	float s()
	{
		float h = 0.5 * (a + b + c);
		return sqrt(h * (h - a) * (h - b) * (h - c));
	}

	~Triangle() {};
};

struct Rectangle : public Shape
{
	Rectangle(int a = 0, int b = 0) : Shape(a, b) {};

	float s() { return a * b; }

	~Rectangle() {}
};

struct Square : public Rectangle
{
	Square(int a = 0) : Rectangle(a, a) { };

	~Square() {};
};

struct Circle : public Shape
{
	Circle(int a = 0) : Shape(a) {};

	float s()
	{
		return (3.14) * (a * a);
	}

	~Circle() {};
};


int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	std::cin >> a >> b >> c;

	Triangle tr = Triangle(a, b, c);
	std::cout << "Triangle area " << tr.s() << std::endl;

	Rectangle rc = Rectangle(a, b);
	std::cout << "Rectangle area " << rc.s() << std::endl;

	Square sq = Square(a);
	std::cout << "Square area " << sq.s() << std::endl;

	Circle cl = Circle(a);
	std::cout << "Circle area " << cl.s() << std::endl;

	return EXIT_SUCCESS;
}