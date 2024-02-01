//write an interface called numbers, with a process(int x,int y). write a class called sum,which in the method
//process find the sum of two numbers & return an int value. Write another class called average in which the 
//process method finds the average of two numbers & int. 

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
        return ((x+y)/2);
    }
}

class U25
{
    public static void main(String []args)
    {
        int x,y;

        sum s1=new sum();

        Scanner Obj=new Scanner(System.in);

        average a1=new average();

        System.out.println("Enter two number");

        x=Obj.nextInt();

        y=Obj.nextInt();

        System.out.println("sum=> "+s1.process(x,y));

        System.out.println("Average=> "+a1.process(x,y));
    }
}