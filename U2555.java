//write an interface called numbers, with a pocess (int x,int y). write a class called sum, which in
//the method process find the sum of two numbers & return an int value. Write another class called
//Average in which the process methods find the average of the two numbers & int.


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

class U2555
{
    public static void main(String []args)
    {
        int a,b;

        Scanner Obj=new Scanner(System.in);

        sum s=new sum();

        average av=new average();

        System.out.println("Enter the First Value-> ");

        a=Obj.nextInt();

        System.out.println("Enter the Second Value-> ");

        b=Obj.nextInt();

        System.out.println("Sum of the Numbers=> "+s.process(a,b));

        System.out.println("Average Of the Numbers=> "+ av.process(a,b));
    }
}