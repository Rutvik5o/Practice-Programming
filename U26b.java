//create a class called number data the accpect to the five numebers. create a sub classes
//called numpay which provides method for following

/*(1) display number entered
 * (2)sum of the number
 * (3)average of the number
 * (4) maximum of the number 
 * (5) minimum of the number
 * 
 * create a class that provide menu for above methods give methods from 
 * command line argument.
 */

 import java.util.*;

 class numberdata
 {
    int a[]=new int [5];

    Scanner Obj=new Scanner(System.in);

    void createarray()
    {
        for(int i=0;i<5;i++)
        {
            System.out.println("Enter elements-> ");
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

        System.out.println("Sum of the array+ "+sum);

    }

    void average()
    {
        int sum=0;

        createarray();

        for(int i=0;i<5;i++)
        {
            sum+=a[i];
        }

        float a=(float)sum/5;

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

        System.out.println("Maximum => "+m);
    }

    void min()
    {
        int n=0;

        for(int i=0;i<5;i++)
        {
            if(n>a[i])
                 n=a[i];
                
        }
        System.out.println("Minimum=> "+n);
    }
 }

 class U26b
 {
    public static void main(String []args)
    {
        numpay Obj=new numpay();

        System.out.println("Enter Choice-> ");

        Scanner Obj1=new Scanner(System.in);

        int ch=Obj1.nextInt();

        switch(ch)
        {
            case 1: Obj.display(); break;

            case 2: Obj.sum(); break;

            case 3: Obj.average(); break;

            case 4: Obj.max(); break;

            case 5: Obj.min(); break;

            default: System.out.println("Sorry! You entered wrong item");
        }
    }
 }