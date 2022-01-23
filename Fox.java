package com.company;

import java.util.Scanner;

public class Fox {
    private String name;
    private double weight;
    private int age;
    private int number;

    public Fox() { };

    public Fox Set (String _name, double _weight, int _age, int _number)
    {
        Fox fox = this;
        this.name = _name;
        this.weight = _weight;
        this.age = _age;
        this.number = _number;
        return fox;
    };

    public void Get ()
    {
        Fox fox = new Fox ();
        String _name;
        double _weight;
        int _age;
        int _number;
        Scanner in = new Scanner(System.in);
        System.out.println("Имя лисы: ");
        _name = in.nextLine();
        do
        {
            System.out.println("Вес лисы в кг: ");
            _weight = in.nextDouble();
        } while (_weight < 1);
        do
        {
            System.out.println("Возраст лисы: ");
            _age = in.nextInt();
        } while (_age < 0);
        do
        {
            System.out.println("Номер вольера: ");
            _number = in.nextInt();
        } while (_number < 5 || _number > 6);
        fox.Set(_name, _weight, _age, _number);
    }

    public void Print()
    {
        System.out.printf("Имя лисы: %s. Вес лисы: %l. Возраст лисы: %d. Номер вольера: %d\n", name, weight, age, number);
    }
}