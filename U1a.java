//write a program evulate simple interest of given princeipel, rate & time.

import java.util.*;

class U1a
{
    public static void main(String []args)
    {
        float p,r,n,si;

        Scanner Obj=new Scanner(System.in);

        System.out.println("Enter value-> ");

        p=Obj.nextInt();

        System.out.println("Enter Rate of Interest-> ");

        r=Obj.nextInt();

        System.out.println("Enter Time In Months-> ");

        n=Obj.nextInt();

        si=(p*r*n)/100;

        System.out.println("Simple Interest=> "+si);
    }
}