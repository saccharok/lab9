#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Raccon
{
private:
	std::string name;
	double weight;
	int age;
	int number;
public:
	Raccon() {};
	Raccon Set(std::string _name, double _weight, int _age)
	{
		Raccon raccon;
		this->name = _name;
		this->weight = _weight;
		this->age = _age;
		this->number = 7;
		return raccon;
	};
	void Get(std::string* _name, double* _weight, int* _age)
	{
		cout << "��� �����: ";
		cin >> *_name;
		while (*_weight <= 0)
		{
			cout << "��� �����: ";
			cin >> *_weight;
		}
		while (age <= 0)
		{
			cout << "������� �����: ";
			cin >> *_age;
		}
	};
	void Print()
	{
		cout << "��� ���� - " << name << ", ��� ���� - " << weight << ", ������� ���� - " << ", ����� ������� - " << number << endl;
	}
	~Raccon() {};
};