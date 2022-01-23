package com.company;

import java.util.Scanner;

public class Raccon
{
    String name;
    double weight;
    int age;
    int number;
    public Raccon () {};
    public Raccon Set (String _name, double _weight, int _age)
    {
        Raccon raccon = this;
        this.name = _name;
        this.weight = _weight;
        this.age = _age;
        this.number = 7;
        return raccon;
    }
    public void Get ()
    {
        Raccon rac= new Raccon ();
        String _name;
        double _weight;
        int _age;
        Scanner in = new Scanner(System.in);
        System.out.println ("Имя енота: ");
        _name = in.nextLine();
        do
        {
            System.out.println ("Вес енота в кг: ");
            _weight = in.nextDouble();
        } while (_weight < 1);
        do
        {
            System.out.println ("Возраст енота: ");
            _age = in.nextInt();
        } while (_age < 0);
        rac.Set(_name, _weight, _age);
    }
    public void Print ()
    {
        System.out.printf("Имя енота: %s. Вес енота: %l. Возраст енота: %d. Номер вольера: %d\n", name, weight, age, number);
    }
}
