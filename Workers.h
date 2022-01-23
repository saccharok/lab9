#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class Workers
{
public:
	struct Name
	{
		std::string lastName;
		std::string name;
		std::string patronymic;
	} name;
private:
	int code;
	int number;
	int payroll;
	int age;
	static int pensionAge;
public:
	Workers() {};
	Workers Set(Name _name, int _code, int _number, int _payroll, int _age)
	{
		Workers worker;
		this->name = _name;
		this->code = _code;
		this->number = _number;
		this->payroll = _payroll;
		this->age = _age;
		return worker;
	}
	static void WorkerToPension(Workers worker)
	{
		if (pensionAge <= worker.age)
		{
			cout << "\n��������� ��������� �� ������.\n";
		}
	}
	Name ReturnName(Workers worker)
	{
		return worker.name;
	}
	Name SetName(std::string _lastName, std::string _name, std::string _patronymic)
	{
		name.lastName = _lastName;
		name.name = _name;
		name.patronymic = _patronymic;
		return name;
	}
	Name GetName(std::string *_lastName, std::string *_name, std::string *_patronymic)
	{
		Workers::Name name1;
		cout << "�������: ";
		cin >> *_lastName;
		cout << "���: ";
		cin >> *_name;
		cout << "��������: ";
		cin >> *_patronymic;
		name1.lastName = *_lastName;
		name1.name = *_name;
		name.patronymic = *_patronymic;
		return name1;
	}
	void PrintName()
	{
		cout << "��� ���������� - " << name.lastName << " " << name.name << " " << name.patronymic << endl;
	}
	int GetWorker(int* _code, int* _number, int* _payroll, int* _age)
	{
		while (code < 100000 || code > 999999)
		{
			cout << "��� ����������: ";
			cin >> *_code;
		}
		while (*_number < 1 || *_number > 7)
		{
			cout << "����� �������: ";
			cin >> *_number;
		}
		while (*_payroll <= 8000)
		{
			cout << "���������� �����: ";
			cin >> *_payroll;
		}
		while (*_age < 18)
		{
			cout << "������� ����������: ";
			cin >> *_age;
		}
		return 0;
	};
	void PrintWorker(Workers worker)
	{
		Workers::PrintName();
		cout << "��� ����������: " << code << ". ����� �������: " << number << ". ���������� �����: " << payroll << ". ������� ����������: " << age << endl;
		worker.WorkerToPension(worker);
	};
	int* CodeByName(Name _name, int _code)
	{
		if (name.lastName == _name.lastName)
			if (name.name == _name.name)
				if (name.patronymic == _name.patronymic)
					_code = code;
		return &_code;
	}
	int& NumberByName(Name _name, int _number)
	{
		if (name.lastName == _name.lastName)
			if (name.name == _name.name)
				if (name.patronymic == _name.patronymic)
					_number = number;
		return _number;
	}
	~Workers() {};
};