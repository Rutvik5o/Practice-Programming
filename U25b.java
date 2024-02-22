//write an interface called numbers, with a process(int x,int y). write a class called
//sum, which in the method
//process find the sum of two number & return an int value. Write another class called
//average in which the 
//process methods finds the average of two numbers & int.

import java.util.Scanner;

interface numbers
{
    int process(int x,int y);
}

class sum implements numbers
{
    public int process(int x,int y)
    {
        return (x+y);
    }
}

class average implements numbers
{
    public int process(int x,int y)
    {
        return (x+y)/2;
    }
}


class U25b
{
    public static void main(String []args)
    {
        Scanner Obj=new Scanner(System.in);

        sum s=new sum();

        average a=new average();

        System.out.println("Enter the two value -> ");

        int x=Obj.nextInt();

        int y=Obj.nextInt();

        System.out.println("Sum of the number=> "+s.process(x,y));

        System.out.println("Average of the number=> "+a.process(x,y));
    }
}