#include <iostream>
#include <string>

struct Animal {
	std::string type;
	std::string name;
	int age;

	Animal(
		std::string type = "Tiger", std::string name = "Oleg", int age = 17)
	{
		this->type = type;
		this->name = name;
		this->age = age;
	}

	Animal(const Animal& an)
	{
		this->type = an.type;
		this->name = an.name;
		this->age = an.age;
	}

	~Animal() {}

	void elder()
	{
		this->age = this->age + 1;
	}
};
void printAnimal(Animal an)
{
	std::cout << an.type << " " << an.name << " " << an.age << "y.o." << std::endl;
}

void elderAnimal(Animal& an)
{
	an.elder();
}


int main(int argc, char* argv[])
{
	Animal baran("Baran", "Tolyan", 18);

	printAnimal(baran);
	elderAnimal(baran);
	printAnimal(baran);

	return EXIT_SUCCESS;
}