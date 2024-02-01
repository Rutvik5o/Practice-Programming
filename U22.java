import java.util.Scanner;

class U22
{
    public static void main(String []args)
    {
        Scanner Obj=new Scanner(System.in);

        int a[]=new int [5];

        for(int i=0;i<=4;i++)
        {
            System.out.println("Enter Value of Array-> ");

            a[i]=Obj.nextInt();
        }

        for(int i=4;i>=0;i--)
        {
            System.out.println("Reverse Order Of an array=> "+a[i]);
        }
    }
}