//write a program to create an array of company name and another array of price quoted
//by the comapnny. fetch the company name hwo has quoted the lowest amount.

import java.util.Scanner;

class U24a
{
    public static void main(String []args)
    {
        Scanner Obj=new Scanner(System.in);

        int p[]=new int[5];

        String n[]=new String[5];

        for(int i=0;i<5;i++)
        {
            System.out.println("Enter name of the company-> ");

            n[i]=Obj.next();

            System.out.println("Enter price quoted-> ");

            p[i]=Obj.nextInt();


        }

        int min=p[0];

        for(int i=0;i<5;i++)
        {
            if(min>p[i])
                min=p[i];
        }

        for(int i=0;i<5;i++)
        {
            if(min==p[i])
            {
                System.out.println("The comapny quoted minimum amount=> "+n[i]);
                break;
            }
        }
    }
}