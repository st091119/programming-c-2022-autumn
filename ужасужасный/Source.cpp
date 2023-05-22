#include <iostream>
#include <ctime>

class Complex {
private:
	double re;
	double im;

public:
	Complex(double re = 0, double im = 0) : re(re), im(im) {}
	Complex(const Complex& cm) : re(cm.re), im(cm.im) {}
	~Complex() {};

	Complex conj()
	{
		im -= 1;
	}

	double abs()
	{
		return re* re + im * im;
	}

	Complex operator=(Complex& cm)
	{
		this->re = cm.re;
		this->im = cm.im;
		return *this;
	}

	Complex operator+(double d)
	{
		return Complex(re + d, im);
	}
	Complex operator-(double d)
	{
		return Complex(re - d, im);
	}
	Complex operator/(double d)
	{
		return Complex(re / d, im / d);
	}
	Complex operator*(double d)
	{
		return Complex(re * d, im * d);
	}

	friend Complex operator+(double d, Complex c)
	{
		c.re += d;
		return c;
	}
	friend Complex operator-(double d, Complex c)
	{
		c.re -= d;
		return c;
	}
	friend Complex operator*(double d, Complex c)
	{
		c.re *= d;
		c.im *= d;
		return c;
	}
	friend Complex operator/(double d, Complex c)
	{
		c.re /= d;
		c.im /= d;
		return c;
	}

	Complex operator+(Complex c)
	{
		c.re += re;
		c.im += im;
		return c;
	}
	Complex operator-(Complex c)
	{
		c.re = re - c.re;
		c.im = im - c.im;
		return c;
	}
	Complex operator*(Complex c)
	{
		c.re = re * c.re - im * c.im;
		c.im = re * c.im + im * c.re;
		return c;
	}
	Complex operator/(Complex c)
	{
		(*this * c) / (c.abs() * c.abs());
		return c;
	}

	friend std::ostream& operator<<(std::ostream& stream, const Complex& c)
	{
		stream << "(" << c.re << " + " << c.im << " * i)";
		return stream;
	}
};

int main(int argc, char* argv[])
{
	srand(time(0));
	double a = 1 + rand() % 20;
	double b = 1 + rand() % 20;
	double c = 1 + rand() % 20;
	double d = 1 + rand() % 20;
	double f = 1 + rand() % 20;

	Complex he(a, b);
	Complex ha(c, d);

	std::cout << he << " + " << d << " = " << he + d << " = " << d + he << std::endl;
	std::cout << he << " - " << d << " = " << he - d << " = " << d - he << std::endl;
	std::cout << he << " * " << d << " = " << he * d << " = " << d * he << std::endl;
	std::cout << he << " / " << d << " = " << he / d << " = " << d / he << std::endl;
	std::cout << he << " + " << ha << " = " << he + ha << std::endl;
	std::cout << he << " - " << ha << " = " << he - ha << std::endl;
	std::cout << he << " * " << ha << " = " << he * ha << std::endl;
	std::cout << he << " / " << ha << " = " << he / ha << std::endl;

	return EXIT_SUCCESS;
}