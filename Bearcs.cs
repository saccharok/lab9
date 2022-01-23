using System;
using System.Collections.Generic;
using System.Text;

namespace lab8CS
{
    class Bear
    {
        public Bear() { }
        public void Set(string _name, double _weight, double _high)
        {
            Bear bear = this;
            this.name = _name;
            this.weight = _weight;
            this.high = _high;
            this.number = 8;
        }
        public void Get()
        {
            Bear bear = new Bear();
            string _name;
            double _weight;
            double _high;
            Console.WriteLine("Имя медведя: ");
            _name = Console.ReadLine();
            do
            {
                Console.WriteLine("Вес медведя в кг: ");
                _weight = Convert.ToDouble(Console.ReadLine());
            } while (_weight < 1);
            do
            {
                Console.WriteLine("Рост медведя в см: ");
                _high = Convert.ToDouble(Console.ReadLine());
            } while (_high < 10);
            bear.Set(_name, _weight, _high);
        }
        public void Print()
        {
            Console.WriteLine($"\nИмя медведя: {name}. Вес медведя в кг: {weight}. Рост медведя в см: {high}. Номер вольера: {number}\n");
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
        private double high
        {
            set
            {
                high = value;
            }
            get
            {
                return high;
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
