//Write a program to evulate simple interest of given principel ,rate & time.


import java.util.*;

class U1
{
    public static void main(String []args)
    {
        float p,r,n,si;

        Scanner Obj=new Scanner(System.in);

        System.out.println("Enter Value-> ");
        
        p=Obj.nextInt();

        System.out.println("Enter Rate Of Interest-> ");

        r=Obj.nextInt();

        System.out.println("Enter Time in Months-> ");

        n=Obj.nextInt();

        si=(p*r*n)/100;

        System.out.println("Simple Interest=> "+si);

        
    }
}