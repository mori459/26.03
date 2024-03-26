#include <iostream>


int summ(int num1, int num2)
{
	return num1 + num2;
}
int dif(int num1, int num2)
{
	return num1 - num2;
}
int prod(int num1, int num2)
{
	return num1 * num2;
}
float quot(float num1, float num2)
{
	if (num2 == 0)
	{
		std::cerr << "Error: devision by 0\n";
	}
	else
	{
		return num1 / num2;
	}
	
}

int main()
{
	setlocale(LC_ALL, "ru");


	char choice;
	float number_1, number_2;
	std::cout << "Введите первое число: ";
	std::cin >> number_1;
	std::cout << "Введите второе число: ";
	std::cin >> number_2;
	std::cout << "Введите знак (+\\-\\*\\/): ";
	std::cin >> choice;
	if (choice == '+')
	{
		std::cout << summ(number_1, number_2);
	}
	else if (choice == '-')
	{
		std::cout << dif(number_1, number_2);
	}
	else if (choice == '*')
	{
		std::cout << prod(number_1, number_2);
	}
	else if (choice == '/')
	{
		std::cout << quot(number_1, number_2);
	}







	return 0;
}
/*
Тип_возврата Имя_функции (параметры_функции)
{
	тело_функции
}
*/