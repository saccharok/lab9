#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Wolf
{
private:
	std::string name;
	int age;
	int number;
public:
	Wolf() {};
	Wolf Set(std::string _name, int _age, int _number)
	{
		Wolf wolf;
		this->name = _name;
		this->age = _age;
		this->number = _number;
		return wolf;
	};
	void Get(std::string *_name, int *_age, int *_number)
	{
		cout << "Имя волка: ";
		cin >> *_name;
		while (*_age <= 0)
		{
			cout << "Возраст волка: ";
			cin >> *_age;
		}
		while (*_number < 1 || *_number > 2)
		{
			cout << "Номер вольера: ";
			cin >> *_number;
		}
	};
	void Print()
	{
		cout << "Имя волка: " << name << ", возраст - " << age << ", номер вольера - " << number << endl;
	}
	friend void NumbersWolfs(Wolf wolf1, Wolf wolf2, Wolf wolf3) {}
	~Wolf() {};
};