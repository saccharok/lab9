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
			cout << "\nОтправьте работника на пенсию.\n";
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
		cout << "Фамилия: ";
		cin >> *_lastName;
		cout << "Имя: ";
		cin >> *_name;
		cout << "Отчество: ";
		cin >> *_patronymic;
		name1.lastName = *_lastName;
		name1.name = *_name;
		name.patronymic = *_patronymic;
		return name1;
	}
	void PrintName()
	{
		cout << "ФИО сотрудника - " << name.lastName << " " << name.name << " " << name.patronymic << endl;
	}
	int GetWorker(int* _code, int* _number, int* _payroll, int* _age)
	{
		while (code < 100000 || code > 999999)
		{
			cout << "Код сотрудника: ";
			cin >> *_code;
		}
		while (*_number < 1 || *_number > 7)
		{
			cout << "Номер вольера: ";
			cin >> *_number;
		}
		while (*_payroll <= 8000)
		{
			cout << "Заработная плата: ";
			cin >> *_payroll;
		}
		while (*_age < 18)
		{
			cout << "Возраст сотрудника: ";
			cin >> *_age;
		}
		return 0;
	};
	void PrintWorker(Workers worker)
	{
		Workers::PrintName();
		cout << "Код сотрудника: " << code << ". Номер вольера: " << number << ". Заработная плата: " << payroll << ". Возраст сотрудника: " << age << endl;
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