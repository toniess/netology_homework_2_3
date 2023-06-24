#include <iostream>
#include <windows.h>

class Counter
{
	int value;

public:
	Counter() : value(1) {};
	Counter(const int value) : value(value) {};

	void increase() { ++value; }
	void decrease() { --value; }
	int  getValue() { return value; }
};

Counter* initCounter()
{
	std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
	std::string answer;
	std::cin >> answer;
	if (answer == "��")
	{
		std::cout << "������� ��������� �������� ��������: ";
		int startValue;
		std::cin >> startValue;
		return new Counter(startValue);
	}
	return new Counter();
}



int main()
{
	std::setlocale(LC_ALL, "russia");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Counter* c = initCounter();
	while (true)
	{
		std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
		char command;
		std::cin >> command;
		if (command == '+')
		{
			c->increase();
		}
		else if (command == '-')
		{
			c->decrease();
		}
		else if (command == '=')
		{
			std::cout << c->getValue() << std::endl;
		}
		else if (command == 'x')
		{
			std::cout << "�� ��������!" << std::endl;
			return 0;
		}
		else
		{
			std::cout << "������������ �������" << std::endl;
		}
	}
	delete c;
}