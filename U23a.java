//write a program to find sum of two matrices of 3X3.

import java.util.*;

class U23a
{
    public static void main(String []args)
    {
        Scanner Obj=new Scanner(System.in);

        int a[][]=new int[3][3];
        int b[][]=new int[3][3];
        int c[][]=new int[3][3];

        System.out.println("Enter elements of first matrix of the order of 3x3");

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                System.out.println("enter first matrix of an array:");

                a[i][j]=Obj.nextInt();
            }
        }

        System.out.println("Enter elemnts of second matric of the order of 3x3");

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                System.out.println("Enter second matrix of an array:");

                b[i][j]=Obj.nextInt();
            }
        }

        System.out.println("Addition of matrices");

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                c[i][j]=a[i][j]+b[i][j];

                System.out.print(c[i][j]+ "\t");
            }
            System.out.println();
        }
    }

}