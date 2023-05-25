#include <iostream>

struct Student {
private:
	std::string fname;
	std::string lname;
	int math;
	int phys;
	int info;

public:

	Student(std::string fname = "Ivan", std::string lname = "Durak", int math = 1, int phys = 1, int info = 1) :
		fname(fname), lname(lname), math(math), phys(phys), info(info) {};

	Student(const Student& st) :
		fname(st.fname), lname(st.lname), math(st.math), phys(st.phys), info(st.info) {};

	~Student() {};

	int getMath() { return math; }
	int getPhys() { return phys; }
	int getInfo() { return info; }

	int srSum()
	{
		return (math + phys + info);
	}

	void printStudent()
	{
		std::cout << fname << ' ' << lname << std::endl;
	}
};

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	Student* st = new Student[n];

	std::string fname;
	std::string lname;

	int m;
	int f;
	int i;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> fname;
		std::cin >> lname;
		std::cin >> m;
		std::cin >> f;
		std::cin >> i;
		st[i] = Student(fname, lname, m, f, i);
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = n - 1; j > i; --i)
		{
			if (st[j - 1].srSum() < st[j].srSum())
			{
				Student temp = st[j - 1];
				st[j - 1] = st[j];
				st[j] = temp;
			}
			else if (st[j - 1].srSum() == st[j].srSum())
			{
				if (st[j - 1].getMath() > st[j].getMath())
				{
					Student temp = st[j - 1];
					st[j - 1] = st[j];
					st[j] = temp;
				}
				else if (st[j - 1].getPhys() > st[j].getPhys())
				{
					Student temp = st[j - 1];
					st[j + 1] = st[j];
					st[j] = temp;
				}
				else if (st[j - 1].getInfo() > st[j].getInfo())
				{
					Student temp = st[j - 1];
					st[j - 1] = st[j];
					st[j] = temp;
				}
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		st[i].printStudent();
	}

	delete[] st;

	return EXIT_SUCCESS;
}