//(3)=> Write a program to find the two matrices of 3X3.

import java.util.*;


class U3333 {

    public static void main(String []args)
    {
        Scanner Obj=new Scanner(System.in);

        int a[][]=new int [3][3];
        int b[][]=new int [3][3];
        int c[][]=new int [3][3];

        System.out.println("Enter Elements of first matrix fo order 3X3:");

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                System.out.println("Enter first matrices of an array-> ");

                a[i][j]=Obj.nextInt();
            }
        }

        System.out.println("Enter Elements of Second matrices of order 3X3");

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                System.out.println("Enter Second matrices of an array-> ");

                b[i][j]=Obj.nextInt();
            }
        }
        
        System.out.println("The Addition of matrices:");

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                c[i][j]=a[i][j]+b[i][j];

                System.out.print(c[i][j] + "\t");
            }

            System.out.println();


        }
    
}
}
