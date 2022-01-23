// lab8C++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include "Workers.h"
#include "Wolf.h"
#include "Beaver.h"
#include "Fox.h"
#include "Raccon.h"
#include "Bear.h"
using namespace std;

void NumbersWolfs(Wolf wolf1, Wolf wolf2, Wolf wolf3)
{
	int i = 0, j = 0, k = 0;
	if (wolf1.number == 1)
		i++;
	else if (wolf1.number == 2)
		j++;
	else k++;
	if (wolf2.number == 1)
		i++;
	else if (wolf2.number == 2)
		j++;
	else k++;
	if (wolf3.number == 1)
		i++;
	else if (wolf3.number == 2)
		j++;
	else k++;
	cout << "Вольер - 1: ";
	cin >> i;
	cout << "Вольер - 2: ";
	cin >> j;
	cout << "Вольер - 3: ";
	cin >> k;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
menu:
	system("cls");
	cout << " Зоопарк \"П О Л И Т Е Х Н И К \" " << endl << endl;
	cout << "1 " << "Волки" << endl;
	cout << "2 " << "Бобры" << endl;
	cout << "3 " << "Лисы" << endl;
	cout << "4 " << "Еноты" << endl;
	cout << "5 " << "Медведи" << endl << endl;
	cout << "Сотрудники - 6" << endl << endl;
	cout << "Выход из программы - 7" << endl;
	int check = 0;
	while (check < 1 || check > 7)
	{
		cin >> check;
		cout << endl;
	};
	if (check == 1)
	{
		system("cls");
		cout << " Зоопарк \"П О Л И Т Е Х Н И К \" " << endl << endl;
		cout << "   Волки" << endl << endl;
		std::string _name;
		int _age;
		int _number;
		Wolf wolf1;
		wolf1.Get(&_name, &_age, &_number);
		wolf1.Set(_name, _age, _number);
		Wolf wolf2;
		wolf2.Get(&_name, &_age, &_number);
		wolf2.Set(_name, _age, _number);
		wolf1.Print();
		wolf2.Print();
		char c;
		cout << endl << "Намжите любую клавишу для возвращения в меню." << endl;
		cin >> c;
		goto menu;
	}
	else if (check == 2)
	{
		system("cls");
		cout << " Зоопарк \"П О Л И Т Е Х Н И К \" " << endl << endl;
		cout << "   Бобры" << endl << endl;
		std::string name;
		double weight;
		double length;
		Beaver beaver1;
		beaver1.Get(&name, &weight, &length);
		beaver1.Set(name, weight, length);
		Beaver beaver2;
		beaver2.Get(&name, &weight, &length);
		beaver2.Set(name, weight, length);
		beaver1.Print();
		beaver2.Print();
		char c = ' ';
		char c;
		cout << endl << "Намжите любую клавишу для возвращения в меню." << endl;
		cin >> c;
		goto menu;
	}
	else if (check == 3)
	{
		system("cls");
		cout << " Зоопарк \"П О Л И Т Е Х Н И К \" " << endl << endl;
		cout << "   Лисы" << endl << endl;
		std::string name;
		double weight;
		int age;
		int number;
		Fox fox1;
		fox1.Get(&name, &weight, &age, &number);
		fox1.Set(name, weight, age, number);
		Fox fox2;
		fox2.Get(&name, &weight, &age, &number);
		fox2.Set(name, weight, age, number);
		fox1.Print();
		fox2.Print();
		char c;
		cout << endl << "Намжите любую клавишу для возвращения в меню." << endl;
		cin >> c;
		goto menu;
	}
	else if (check == 4)
	{
		system("cls");
		cout << " Зоопарк \"П О Л И Т Е Х Н И К \" " << endl << endl;
		cout << "   Еноты" << endl << endl;
		std::string name;
		double weight;
		int age;
		Raccon rac1;
		rac1.Get(&name, &weight, &age);
		rac1.Set(name, weight, age);
		Raccon rac2;
		rac2.Get(&name, &weight, &age);
		rac2.Set(name, weight, age);
		rac1.Print();
		rac2.Print();
		char c;
		cout << endl << "Намжите любую клавишу для возвращения в меню." << endl;
		cin >> c;
		goto menu;
	}
	else if (check == 5)
	{
		system("cls");
		cout << " Зоопарк \"П О Л И Т Е Х Н И К \" " << endl << endl;
		cout << "   Медведи" << endl << endl;
		std::string name;
		double weight;
		double high;
		int age;
		Bear bear1;
		bear1.GetBear(&name, &weight, &high, &age);
		bear1.SetBear(name, weight, high, age);
		Bear bear2;
		bear2.GetBear(&name, &weight, &high, &age);
		bear2.SetBear(name, weight, high, age);
		bear1.PrintBear();
		bear2.PrintBear();
		char c;
		cout << endl << "Намжите любую клавишу для возвращения в меню." << endl;
		cin >> c;
		goto menu;
	}
	else if (check == 6)
	{
		system("cls");
		cout << " Зоопарк \"П О Л И Т Е Х Н И К \" " << endl << endl;
		cout << "   Сотрудники" << endl << endl;
		std::string lastName;
		std::string name;
		std::string patronymic;
		int code, number, payroll, age;
		Workers worker1;
		Workers::Name name1 = worker1.GetName(&lastName, &name, &patronymic);
		worker1.GetWorker(&code, &number, &payroll, &age);
		worker1 = worker1.Set(name1, code, number, payroll, age);
		Workers worker2;
		name1 = worker2.GetName(&lastName, &name, &patronymic);
		worker2.GetWorker(&code, &number, &payroll, &age);
		worker2 = worker2.Set(name1, code, number, payroll, age);
		name1 = worker1.ReturnName(worker1);
		int* code1;
		code1 = worker1.CodeByName(name1, code);
		cout << "Код первого сотрудника - " << code1 << endl;
		name1 = worker2.ReturnName(worker2);
		int number1;
		number = worker2.NumberByName(name1, number);
		cout << "Номер вольера, к которому прикреплен второй сотрудник - " << number1 << endl;
		cout << "Получить информацию: \n 1.Кратко \n 2.Полностью\n";
		int flag;
		do {
			cin >> flag;
		} while (flag < 1 || flag > 2);
		if (flag == 1)
		{
			cout << "Кратко:" << endl;
			worker1.PrintName();
			worker2.PrintName();
		}
		else
		{
			cout << "Полностью: " << endl;
			worker1.PrintWorker(worker1);
			worker2.PrintWorker(worker2);
		}
		char c;
		cout << endl << "Намжите любую клавишу для возвращения в меню." << endl;
		cin >> c;
		goto menu;
	}
	else exit(1);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
