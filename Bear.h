#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Bear
{
private:
	std::string name;
	double weight;
	double high;
	int age;
	int number;
public:
	Bear() {};
	Bear SetBear(std::string _name, double _weight, double _high, int _age)
	{
		Bear bear;
		this->name = _name;
		this->weight = _weight;
		this->high = _high;
		this->age = _age;
		this->number = 7;
		return bear;
	};
	void GetBear(std::string* _name, double* _weight, double* _high, int* _age)
	{
		cout << "Имя медведя: ";
		cin >> name;
		while (weight <= 0)
		{
			cout << "Вес медведя в кг: ";
			cin >> weight;
		}
		while (high <= 0)
		{
			cout << "Рост медведя: ";
			cin >> high;
		}
		while (age <= 0)
		{
			cout << "Возраст медведя: ";
			cin >> age;
		}
		number = 7;
	}
	void PrintBear()
	{
		cout << "Имя медведя - " << name << ", вес медведя - " << ", рост медведя - " << ", возраст медведя - " << age << ", номер вольера - " << number << endl;
	}
	~Bear() {};
};