//write an interface called number, with a method int process(int x,int y) 
//write an class called sum,which in the method process finds the sum of two 
//numbers and return an int value. Write another class called average, in 
//which the process methods finds the average of the two numbers and int.

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

class U25a
{
    public static void main(String []args)
    {
        int x,y;

        sum s=new sum();

        average a=new average();

        Scanner Obj=new Scanner(System.in);

        System.out.println("Enter the two values:");

        x=Obj.nextInt();

        y=Obj.nextInt();

        System.out.println("Sum=> "+s.process(x,y));

        System.out.println("Average=> "+a.process(x,y));
    }
}