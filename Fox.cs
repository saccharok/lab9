using System;
using System.Collections.Generic;
using System.Text;

namespace lab8CS
{
    class Fox
    {
        public Fox() { }
        public Fox Set(string _name, double _weight, int _age, int _number)
        {
            Fox fox = this;
            this.name = _name;
            this.weight = _weight;
            this.age = _age;
            this.number = _number;
            return fox;
        }
        public void Get()
        {
            Fox fox = new Fox();
            string _name;
            double _weight;
            int _age;
            int _number;
            Console.WriteLine("Имя лисы: ");
            _name = Console.ReadLine();
            do
            {
                Console.WriteLine("Вес лисы в кг: ");
                _weight = Convert.ToDouble(Console.ReadLine());
            } while (_weight < 1);
            do
            {
                Console.WriteLine("Возраст лисы: ");
                _age = Convert.ToInt32(Console.ReadLine());
            } while (_age < 0);
            do
            {
                Console.WriteLine("Номер вольера: ");
                _number = Convert.ToInt32(Console.ReadLine());
            } while (_number < 5 || _number > 6);
            fox.Set(_name, _weight, _age, _number);
        }
        public void Print()
        {
            Console.WriteLine($"\nИмя лисы: {name}. Вес лисы в кг: {weight}. Возраст лисы: {age}. Номер вольера: {number}.\n");
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
        private double weight
        {
            set
            {
                weight = value;
            }
            get
            {
                return weight;
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
    }
}
