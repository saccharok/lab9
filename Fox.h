#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Fox
{
private:
	std::string name;
	double weight;
	int age;
	int number;
public:
	Fox() {};
	Fox Set(std::string _name, double _weight, int _age, int _number)
	{
		Fox fox;
		this->name = _name;
		this->weight = _weight;
		this->age = _age;
		this->number = _number;
		return fox;
	};
	void Get(std::string* _name, double* _weight, int* _age, int* _number)
	{
		cout << "Имя лисы: ";
		cin >> *_name;
		while (*_weight <= 0)
		{
			cout << "Вес лисы: ";
			cin >> *_weight;
		}
		while (*_age <= 0)
		{
			cout << "Возраст лисы: ";
			cin >> *_age;
		}
		while (*_number < 5 || *_number > 6)
		{
			cout << "Номер вольера: ";
			cin >> *_number;
		};
	}
	void Print()
	{
		cout << "Имя бобра - " << name << ", вес волка - " << weight << ", возраст лисы - " << ", номер вольера - " << number << endl;
	}
	~Fox() {};
};