package com.company;

import java.util.Scanner;

public class Beaver
{
    private String name;
    private double weight;
    private double length;
    private int number;
    public Beaver() { };

    public Beaver Set (String _name, double _weight, double _length)
    {
        Beaver beaver = this;
        this.name = _name;
        this.weight = _weight;
        this.length = _length;
        this.number = 4;
        return beaver;
    }

    public void Get ()
    {
        Beaver beaver = new Beaver();
        String _name;
        double _weight;
        double _lenght;
        Scanner in = new Scanner(System.in);
        System.out.println("Имя бобра: ");
        _name = in.nextLine();
        do
        {
            System.out.println("Вес бобра в кг: ");
            _weight = in.nextDouble();
        } while (_weight < 1);
        do
        {
            System.out.println("Длина хвоста бобра в см: ");
            _lenght = in.nextDouble();
        } while (_lenght < 0);
        beaver.Set(_name, _weight, _lenght);
    }

    public void Print ()
    {
        System.out.printf("Имя бобра: %s. Вес - кг: %f. Длина хвоста - см: %f. Номер вольера: %d.\n", name, weight, length, number);
    }
}
