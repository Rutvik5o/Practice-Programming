//write a program to fin dsum of two matrices of 3X3.

import java.util.*;

class U23b
{
    public static void main(String []args)
    {
        int a[][]=new int [3][3];
        int b[][]=new int [3][3];
        int c[][]=new int [3][3];

        Scanner Obj=new Scanner(System.in);

        System.out.println("Enter elements of first matrix of the order 3X3");

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                System.out.println("Enter first matric of an array-> ");

                a[i][j]=Obj.nextInt();
            }
        }

        System.out.println("Enter elements of second matrix of the order 3X3");

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                b[i][j]=Obj.nextInt();
            }
        }

        System.out.println("The Addiiton of matrices=> ");

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