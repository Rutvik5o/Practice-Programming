//create c class called NumberData the acccpect of the five numbers. Create a sub classes
//called NumPlay with provides methods for following:

//(1)Display Number Entered
//(2)Sum Of the Number
//(3)Average of the Number
//(4)Maximum of the Number
//(5)Minimum of the Numer

//create a class that provides menu for above methods
//give methods from command line arguments.

import java.util.*;


class NumberData
{
    int a[]=new int[5];

    Scanner Obj=new Scanner(System.in);

    void createarray()
    {
        for(int i=0;i<5;i++)
        {
            System.out.println("Enter Elements-> ");
            a[i]=Obj.nextInt();
        }
    }
}

class NumPlay extends NumberData
{
    void display()
    {
        createarray();

        for(int i=0;i<5;i++)
        {
            System.out.println("Elements Of the Array=> "+a[i]);
        }
    }

    void sum()
    {
        int sum=0;

        createarray();

        for(int i=0;i<5;i++)
        {
            sum+=a[i];
        }

        System.out.println("Sum => "+sum);
    }

    void average()
    {
        int sum=0;

        createarray();

        for(int i=0;i<5;i++)
        {
            sum+=a[i];
        }

        float avg=(float)sum/5;

        System.out.println("Average =>"+avg);
    }

    void max()
    {
        int m=0;

        createarray();

        for(int i=0;i<5;i++)
        {
            if(m<a[i])
                m=a[i];
        }

        System.out.println("Maximum => "+m);
    }

    void min()
    {
        int m=0;

        createarray();

        for(int i=0;i<5;i++)
        {
            if(m>a[i])
                m=a[i];
        }

        System.out.println("Minimum => "+m);
    }
}

class U266
{
    public static void main(String []args)
    {
        NumPlay Obj=new NumPlay();

        int ch=Integer.parseInt(args[0]);

        switch(ch)
        {
            case 1: Obj.display();
                    break;

            case 2: Obj.sum();
                    break;

            case 3: Obj.average();
                    break;

            case 4: Obj.max();
                    break;

            case 5: Obj.min();
                    break;

            default: System.out.println("Wrong Choice!!");
        }
    }
}
