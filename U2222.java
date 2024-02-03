//write a program to create an array to stre 5 integers 
//values. Also intitalize the array with 5 numbers and
//display the array elements as reverse order.


import java.util.Scanner;

class U2222
{
    public static void main(String []args)
    {
        Scanner Obj=new Scanner(System.in);

        int a[]=new int[5];

        System.out.println("Enter 5 Values-> ");

        for(int i=0;i<=4;i++)
        {
            a[i]=Obj.nextInt();
        }

        for(int i=4;i>=0;i--)
        {
            System.out.println("Reverse Order of an array=> "+a[i]);
        }
    }
}