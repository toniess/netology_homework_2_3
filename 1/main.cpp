#include <iostream>

class Calculator
{
	double num1;
	double num2;

public:
	double add() { return num1 + num2; }

	double multiply() { return num1 * num2; }

	double subtract_1_2() { return num1 - num2; }

	double subtract_2_1() { return num2 - num1; }

	double divide_1_2() { return num1 / num2; }

	double divide_2_1() { return num2 / num1; }

	bool set_num1(double num1)
	{
		if (num1 == 0)
		{
			return false;
		}
		this->num1 = num1;
		return true;
	}

	bool set_num2(double num2)
	{
		if (num2 == 0)
		{
			return false;
		}
		this->num2 = num2;
		return true;
	}
};

void check(Calculator& c)
{
	int num1, num2;
	do {
		std::cout << "¬ведите num1: ";
		std::cin >> num1;
	} while (!c.set_num1(num1));

	do {
		std::cout << "¬ведите num2: ";
		std::cin >> num2;
	} while (!c.set_num2(num2));

	std::cout << "num1 + num2 = " << c.add() << std::endl;
	std::cout << "num1 - num2 = " << c.subtract_1_2() << std::endl;
	std::cout << "num2 - num1 = " << c.subtract_2_1() << std::endl;
	std::cout << "num1 * num2 = " << c.multiply() << std::endl;
	std::cout << "num1 / num2 = " << c.divide_1_2() << std::endl;
	std::cout << "num2 / num1 = " << c.divide_2_1() << std::endl;
}

int main()
{
	std::setlocale(LC_ALL, "russian");
	Calculator c;
	while (true)
	{
		check(c);
	}
}