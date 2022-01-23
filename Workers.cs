using System;
using System.Collections.Generic;
using System.Text;
using System.IO;

namespace lab8CS
{
    class Workers
    {
        public Workers() { }
        public Workers Set(Name _name, int _code, int _number, int _payroll, int _age)
        {
            Workers worker = this;
            this.name = _name;
            this.code = _code;
            this.number = _number;
            this.payroll = _payroll;
            this.age = _age;
            return worker;
        }
        public void Get(Name _name)
        {
            Workers worker = new Workers();
            int _code;
            do
            {
                Console.WriteLine("Код сотрудника: ");
                _code = Convert.ToInt32(Console.ReadLine());
            } while (_code < 100000 || _code > 999999);
            int _number;
            do
            {
                Console.WriteLine("Номер вольера: ");
                _number = Convert.ToInt32(Console.ReadLine());
            } while (_number < 1 || _number > 7);
            int _payroll;
            do
            {
                Console.WriteLine("Заработная плата: ");
                _payroll = Convert.ToInt32(Console.ReadLine());
            } while (_payroll <= 8000);
            int _age;
            do
            {
                Console.WriteLine("Возраст сотрудника: ");
                _age = Convert.ToInt32(Console.ReadLine());
            } while (age < 18);
            worker.Set(_name, _code, _number, _payroll, _age);
        }
        public static void WorkerToPension(Workers worker)
        {
            if (pensionAge <= worker.age)
            {
                Console.WriteLine("Отправьте работника на пенсию.\n");
            }
        }
        public void Print(Workers worker)
        {
            name.Print();
            Console.WriteLine($"Код сотрудника: {worker.code}. Номер вольера: {worker.number}. Заработная плата: {worker.payroll}. Возраст: {worker.age}\n");
            WorkerToPension(worker);
        }
        public Name GetWorkersName (Workers worker)
        {
            return worker.name;
        }
        ~Workers() { }
        public class Name
        {
            public Name() { }
            public void Set(string _lastName, string _name, string _patronymic)
            {
                Name name = new Name();
                name.lastName = _lastName;
                name.name = _name;
                name.patronymic = _patronymic;
            }
            public void Get()
            {
                string _lastName;
                string _name;
                string _patronymic;
                Console.WriteLine("Фамилия: ");
                _lastName = Console.ReadLine();
                Console.WriteLine("Имя: ");
                _name = Console.ReadLine();
                Console.WriteLine("Отчество: ");
                _patronymic = Console.ReadLine();
                lastName = _lastName;
                name = _name;
                patronymic = _patronymic;
            }
            public void Print()
            {
                Console.WriteLine($"\nФамилия: {lastName}. Имя: {name}. Отчество: {patronymic}.\n");
            }
            ~Name() { }
            private string lastName 
            {
                set
                {
                    lastName = value;
                }
                get
                {
                    return lastName;
                }
            }
            private string name 
            { 
                set
                {
                    name = value;
                }
                get
                {
                    return name;
                }
            }
            private string patronymic
            {
                set
                {
                    patronymic = value;
                }
                get
                {
                    return patronymic;
                }
            }
        }
        private Name name 
        { 
            set
            {
                _ = name;
            }
            get => name;
        }
        private int code 
        { 
            set
            {
                code = value;
            }
            get
            {
                return code;
            }
        }
        private int number 
        { 
            set
            {
                number = value;
            }
            get
            {
                return number;
            }
        }
        private int payroll 
        { 
            set
            {
                payroll = value;
            }
            get
            {
                return payroll;
            }
        }
        private int age 
        { 
            set
            {
                age = value;
            }
            get
            {
                return age;
            }
        }
        private static int pensionAge = 65;
    }
}