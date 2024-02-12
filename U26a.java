/*create an class called numberdata the accpet to the five numbers. Create a sub classes
 * called numpay which provides method for following
 * 
 * (1) display number entered
 * (2) sum of the number
 * (3) average of the number
 * (4) maximum of the number
 * (5) minimum of the number
 * 
 * create a class that provies menu for methods give methods from command line argument.
*/

import java.util.*;

class numberdata
{
    int a[]=new int[5];

    Scanner Obj=new Scanner(System.in);

    void createarray()
    {
        for(int i=0;i<5;i++)
        {
            System.out.println("Enter elements=> ");
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

        float avg=(float)sum/5;

        System.out.println("Average of the number=> "+avg);

    }

    void max()
    {
        int m=0;

        createarray();

        for(int i=0;i<5;i++)
        {
            if(m<a[i]);
                m=a[i];
        }

        System.out.println("Maximum number=> "+m);
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
        System.out.println("Minimum Number=> "+m);
    }

    
    
}

class U26a
{
    public static void main(String []args)
    {
        int ch=0;
        numpay Obj=new numpay();
        try
        {
        ch=Integer.parseInt(args[0]);
        }
        catch(Exception e)
        {
            System.out.println("Enter choice through command line argument");
            break;
        }

        switch(ch)
        {
            case 1: Obj.display(); break;

            case 2: Obj.sum(); break;

            case 3: Obj.average(); break;

            case 4: Obj.max();  break;

            case 5: Obj.min(); break;

            default: System.out.println("Sorry! you entered wrong item");
        }
    }
}