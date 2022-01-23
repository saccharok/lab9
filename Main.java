package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args)
    {
        System.out.println(" Зоопарк \\\"П О Л И Т Е Х Н И К \\\" \\n\\n");
        System.out.println(" 1  Волки");
        System.out.println(" 2  Бобры");
        System.out.println(" 3  Лисы");
        System.out.println(" 4  Еноты");
        System.out.println(" 5  Медведи");
        System.out.println(" Введите 6, чтобы узнать информацию о сотрудниках");
        System.out.println(" Введите 7, чтобы выйти из программы");
        Scanner in = new Scanner(System.in);
        int check;
        do {
            check = in.nextInt();
        } while (check < 1 || check > 7);
        if (check == 1)
        {
            Wolf wolf1 = new Wolf();
            wolf1.Get();
            Wolf wolf2 = new Wolf ();
            wolf2.Set("Олег", 5, 1);
            wolf1.Print();
            wolf2.Print();
        }
        if (check == 2)
        {
            Beaver beaver1 = new Beaver();
            beaver1.Get();
            Beaver beaver2 = new Beaver();
            beaver2.Set("Лёха", 6, 13);
            beaver1.Print();
            beaver2.Print();
        }
        if (check == 3)
        {
            Fox fox1 = new Fox();
            fox1.Get();
            Fox fox2 = new Fox();
            fox2.Set("Катя", 4.5, 4, 5);
            fox1.Print();
            fox2.Print();
        }
        if (check == 4)
        {
            Raccon raccon1 = new Raccon();
            raccon1.Get();
            Raccon raccon2 = new Raccon();
            raccon2.Set("Ваня", 4, 3);
            raccon1.Print();
            raccon2.Print();
        }
        if (check == 5)
        {
            Bear bear1 = new Bear();
            bear1.Get();
            Bear bear2 = new Bear();;
            bear2.Set("Маша", 35, 149);
            bear1.Print();
            bear2.Print();
        }
        if (check == 6)
        {
            Workers.Name name = new Workers.Name();
            name.Get();
            Workers worker1 = new Workers();
            worker1.Get(name);
            name.Set("Земская", "Софья", "Сергеевна");
            Workers worker2 = new Workers();
            worker2.Set(name, 123456, 1, 15000, 19);
            worker1.Print();
            worker2.Print();
        }
        if (check == 7)
        {
            System.exit(0);
        }
    }
}
