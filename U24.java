//write program to create an array of company name and another array of price 
//quoted by the company fetch the company name who has quoted the lowest amount.

import java.util.*;

class U24
{
    public static void main(String []args)
    {
        Scanner Obj=new Scanner(System.in);

        int p[]=new int[5];

        String n[]=new String[5];

        for(int i=0;i<5;i++)
        {
            System.out.println("Enter Name of the comapany-> ");

            n[i]=Obj.next();

            System.out.println("Enter Price Quoted-> ");

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
                System.out.println("The Comapny Quoted Minimum Amount=> "+n[i]);
                break;
             }
        }
    }
}