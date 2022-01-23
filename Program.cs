using System;
using System.Text;

namespace lab8CS
{
    class Program
    {
        static void Main(string[] args)
        {
        menu:
            Console.WriteLine(" Зоопарк \"П О Л И Т Е Х Н И К \" \n\n");
            Console.WriteLine(" 1  Волки");
            Console.WriteLine(" 2  Бобры");
            Console.WriteLine(" 3  Лисы");
            Console.WriteLine(" 4  Еноты");
            Console.WriteLine(" 5  Медведи");
            Console.WriteLine(" Введите 6, чтобы узнать информацию о сотрудниках");
            Console.WriteLine(" Введите 7, чтобы выйти из программы");
            int check;
            do
            {
                check = Convert.ToInt32(Console.ReadLine());
            } while (check < 1 || check > 7);
            if (check == 1)
            {
                Console.Clear();
                Console.WriteLine(" Зоопарк \"П О Л И Т Е Х Н И К \" \n\n");
                Console.WriteLine("    Сектор - Волки");
                Wolf wolf1 = new Wolf();
                wolf1.Get();
                Wolf wolf2 = new Wolf();
                wolf2.Set("Денис", 19, 2);
                wolf1.Print();
                wolf2.Print();
                char c;
                Console.WriteLine("Нажмите любую клавишу, чтобы вернуться в меню");
                c = Convert.ToChar(Console.ReadLine());
                Console.Clear();
                goto menu;
            }
            else if (check == 2)
            {
                Console.Clear();
                Console.WriteLine(" Зоопарк \"П О Л И Т Е Х Н И К \" \n\n");
                Console.WriteLine("    Сектор - Бобры");
                Beaver beaver1 = new Beaver();
                beaver1.Get();
                Beaver beaver2 = new Beaver();
                beaver2.Set("Лёха", 8.5, 19);
                beaver1.Print();
                beaver2.Print();
                char c;
                Console.WriteLine("Нажмите любую клавишу, чтобы вернуться в меню");
                c = Convert.ToChar(Console.ReadLine());
                Console.Clear();
                goto menu;
            }
            else if (check == 3)
            {
                Console.Clear();
                Console.WriteLine(" Зоопарк \"П О Л И Т Е Х Н И К \" \n\n");
                Console.WriteLine("    Сектор - Лисы");
                Fox fox1 = new Fox();
                fox1.Get();
                Fox fox2 = new Fox();
                fox2.Set("Катя", 49, 19, 6);
                fox1.Print();
                fox2.Print();
                char c;
                Console.WriteLine("Нажмите любую клавишу, чтобы вернуться в меню");
                c = Convert.ToChar(Console.ReadLine());
                Console.Clear();
                goto menu;
            }
            else if (check == 4)
            {
                Console.Clear();
                Console.WriteLine(" Зоопарк \"П О Л И Т Е Х Н И К \" \n\n");
                Console.WriteLine("    Сектор - Еноты");
                Raccon raccon1 = new Raccon();
                raccon1.Get();
                Raccon raccon2 = new Raccon();
                raccon2.Set("Ваня", 6, 3);
                raccon1.Print();
                raccon2.Print();
                char c;
                Console.WriteLine("Нажмите любую клавишу, чтобы вернуться в меню");
                c = Convert.ToChar(Console.ReadLine());
                Console.Clear();
                goto menu;
            }
            else if (check == 5)
            {
                Console.Clear();
                Console.WriteLine(" Зоопарк \"П О Л И Т Е Х Н И К \" \n\n");
                Console.WriteLine("    Сектор - Медведи");
                Bear bear1 = new Bear();
                bear1.Get();
                Bear bear2 = new Bear();
                bear2.Set("Маша", 35, 149);
                bear1.Print();
                bear2.Print();
                char c;
                Console.WriteLine("Нажмите любую клавишу, чтобы вернуться в меню");
                c = Convert.ToChar(Console.ReadLine());
                Console.Clear();
                goto menu;
            }
            else if (check == 6)
            {
                Console.Clear();
                Console.WriteLine(" Зоопарк \"П О Л И Т Е Х Н И К \" \n\n");
                Console.WriteLine("    Сотрудники");
                Workers.Name name1 = new Workers.Name();
                name1.Set("Земская", "Софья", "Сергеевна");
                Workers worker1 = new Workers();
                worker1.Set(name1, 123456, 1, 15000, 19);
                Workers worker2 = new Workers();
                Workers.Name name2 = new Workers.Name();
                name2.Get();
                worker2.Get(name2);
                int flag;
                Console.WriteLine("\nВыберете, как вывести информацию:\n 1. Кратко\n 2. Полностью\n");
                do
                {
                    flag = Convert.ToInt32(Console.ReadLine());
                } while (flag < 1 || flag > 2);
                if (flag == 1)
                {
                    Workers.Name name = worker1.GetWorkersName(worker1);
                    name.Print();
                    name = worker2.GetWorkersName(worker2);
                    name.Print();
                }
                if (flag == 2)
                {
                    worker1.Print(worker1);
                    worker2.Print(worker2);
                }
                char c;
                Console.WriteLine("Нажмите любую клавишу, чтобы вернуться в меню");
                c = Convert.ToChar(Console.ReadLine());
                Console.Clear();
                goto menu;
            }
            else
            {
                Environment.Exit(0);
            }
        }
    }
}
