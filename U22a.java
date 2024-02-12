//write a java program to creat an array to 5 integers values. Also intialize the array
//with 5 numbers and display the array elements in reverse order.

import java.util.Scanner;

class U22a
{
    public static void main(String []args)
    {
        Scanner Obj=new Scanner(System.in);

        int a[]=new int[5];

        for(int i=0;i<=4;i++)
        {
            System.out.println("Enter the values in array-> ");
            a[i]=Obj.nextInt();
        }

        for(int i=4;i>=0;i--)
        {
            System.out.println("Reverse Order of an array=> "+a[i]);
        }
    }
}