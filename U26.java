//create a class called numberdata the accpet o the five numbers. Create a sub classes called numpay which provies method for following
/* 
(1)display number entered
(2) sum of the number
(3) average of the number
(4) maximum of the number
(5)minimum of the number  */

//create a class that provides menu for above methods give methods from command line arugment.

import java.util.*;

class numberdata
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

class numpay extends numberdata
{

    void display()
    {
        createarray();

        for(int i=0;i<5;i++)
        {
            System.out.println("There elements in array=> "+a[i]);
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


        System.out.println("Sum of the array=> "+sum);


    }

    void average()
    {
        int sum=0;

        createarray();

        for(int i=0;i<5;i++)
        {
            sum+=a[i];
        }

        float a=sum/5;

        System.out.println("Average of the array=> "+a);
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

        System.out.println("Maximum is=> "+m);
    }

    void min()
    {
        int n=0;

        createarray();

        for(int i=0;i<5;i++)
        {
            if(n>a[i])
                n=a[i];
        }

        System.out.println("Minimum is=> "+n);
    }
}

class U26
{
    public static void main(String []args)
    {
        numpay Obj=new numpay();

        int ch=Integer.parseInt(args[0]);

        switch(ch)
        {
            case 1: Obj.display(); break;

            case 2: Obj.sum(); break;

            case 3: Obj.average(); break;

            case 4: Obj.max(); break;

            case 5: Obj.min();  break;

            default: System.out.println("Sorry! You entered wrong item");
        }
    }

}