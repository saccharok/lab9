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
		cout << "��� �����: ";
		cin >> *_name;
		while (*_weight <= 0)
		{
			cout << "��� �����: ";
			cin >> *_weight;
		}
		while (*_length <= 0)
		{
			cout << "����� ������ ����� � �����������: ";
			cin >> *_length;
		}
	}
	void Print()
	{
		cout << "��� ����� - " << name << ",��� ����� - " << weight << ", ����� ������ ����� � ����������� - " << length << ", ����� ������� - " << number << endl;
	}
	~Beaver() {};
};