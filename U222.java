//write a program to create an array to store 5 integer value. also intitalize the array with 5
//numbers and display th earray elemnts in reverse order.

import java.util.Scanner;

class U222
{
    public static void main(String []args)
    {
        int a[]=new int [5];

        Scanner Obj=new Scanner(System.in);

        for(int i=0;i<=4;i++)
        {
            System.out.println("Enter value of an array-> ");
            a[i]=Obj.nextInt();
        }

        for(int i=4;i>=0;i--)
        {
           System.out.println("Here is your result-> "+a[i]);


        }
    }
}