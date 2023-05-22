#include <iostream>

enum AnimalType
{
	NONE = 0,
	GOOSE = 1,
	DRAGON = 2,
	CAT = 3,
	MOUSE = 4,
	FLY = 5,
	FROG = 6,
	BEAVER = 7,
	PIGEON = 8,
	WOLF = 9,
	CAPIBARA = 10,
	RAT = 11,
	TARAKAN = 12
};

enum AnimalName
{
	KTOYA = 0,
	SANISHVILI = 1,
	SHURIK = 2,
	SANCHIK = 3,
	EGORCHIK = 4,
	CHIPOLLINO = 5,
	SANYA = 6,
	SANEK = 7,
	SASHA = 8,
	SASHKA = 9,
	SASHOK = 10
};

class Animal
{
private:
	AnimalType type;
	AnimalName name;
	int power;
public:
	Animal(AnimalType type = NONE, AnimalName name = KTOYA, int power = 0) :
		type(type), name(name), power(power) {}
	Animal(const Animal& animal) :
		type(animal.type), name(animal.name), power(animal.power) {}
	~Animal() {}

	AnimalType getType() { return type; }
	AnimalName getName() { return name; }
	int getPower() { return power; }

	void setPower(int power)
	{
		if (power >= 0)
		{
			this->power = power;
		}
	}
	void SetName(AnimalName name)
	{
		this->name = name;
	}
	void SetType(AnimalType type)
	{
		this->type = type;
	}

	void mighter() { power++; }
	void weaker() { power--; };

	void printInfo()
	{
		std::cout << "type = " << type << std::endl;
		std::cout << "name = " << name << std::endl;
		std::cout << "power = " << power << std::endl;
	}

	void killed()
	{
		delete this;
	}
};

void fight(Animal a1, Animal a2)
{
	if (a1.getPower() > a2.getPower())
	{
		while (a2.getPower() != 0)
		{
			a1.mighter();
			a2.weaker();
		}
	}
	else if (a1.getPower() == a2.getPower())
	{
		a1.setPower(0);
		a2.setPower(0);
	}
	else
	{
		while (a1.getPower() != 0)
		{
			a2.mighter();
			a1.weaker();
		}
	}
}

int main(int argc, char* argv[])
{
	srand(time(NULL));
	Animal* zoo = new Animal[100];
	for (int i = 0; i < 100; ++i)
	{
		zoo[i] = Animal();

		int tmp1 = 1 + rand() % (12);
		int tmp2 = 1 + rand() % (10);
		int tmp3 = 1 + rand() % (30);

		zoo[i].getType() == AnimalType(tmp1);
		zoo[i].getName() == AnimalName(tmp2);
		zoo[i].getPower() == tmp3;
	}

	int n = 100;
	int k = 0;
	int l = 0;
	while (n != 1) // тут надо сделать так, чтобы они записывались в новый массив каждый раз
	{

		if (n % 2 == 0)
		{
			k = n / 2;
		}
		else
		{
			k = (n + 1) / 2;
		}

		l = 100 - n;

		for (int i = 0; i < k - 1; ++i)
		{
			fight(zoo[i], zoo[l - i]);
			if (zoo[i].getPower() == 0)
			{
				zoo[i].killed();
				n -= 1;
			}
			else if (zoo[l - i].getPower() == 0)
			{
				zoo[l - i].killed();
				n -= 1;
			}
		}
	}

	delete[] zoo;

	return EXIT_SUCCESS;
}