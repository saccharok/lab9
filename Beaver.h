#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Beaver
{
private:
	std::string name;
	double weight;
	double length;
	int number;
public:
	Beaver() {};
	Beaver Set(std::string _name, double _weight, double _length)
	{
		Beaver beaver;
		this->name = _name;
		this->weight = _weight;
		this->length = _length;
		this->number = 4;
		return beaver;
	};
	void Get(std::string *_name, double *_weight, double *_length)
	{
		cout << "Имя бобра: ";
		cin >> *_name;
		while (*_weight <= 0)
		{
			cout << "Вес бобра: ";
			cin >> *_weight;
		}
		while (*_length <= 0)
		{
			cout << "Длина хвоста бобра в сантиметрах: ";
			cin >> *_length;
		}
	}
	void Print()
	{
		cout << "Имя бобра - " << name << ",вес волка - " << weight << ", длина хвоста бобра в сантиметрах - " << length << ", номер вольера - " << number << endl;
	}
	~Beaver() {};
};