//write a program to reverse the array of the int 

import java.util.Scanner;

class U22b
{
    public static void main(String []args)
    {
        Scanner Obj=new Scanner(System.in);

        int a[]=new int[5];

        for(int i=0;i<=4;i++)
        {
            System.out.println("Enter the value of an array-> ");

            a[i]=Obj.nextInt();
        }
    
        for(int i=4;i>=0;i--)
        {
            System.out.println("Reverse order of an array=> "+a[i]);
        }
        
        
    }
}