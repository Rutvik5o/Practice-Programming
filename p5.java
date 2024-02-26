//write a java program to calculate the hypotenuse of right angled triangle when other 
//side of triagle are given.


//Hypoteuse=> square root (x*x +y*y) using command line argument.

import java.util.*;

class p5
{
    public static void main(String []args)
    {
        Scanner Obj=new Scanner(System.in);

        System.out.println("Enter the value of x & y");

        int a=Obj.nextInt();

        int b=Obj.nextInt();

        double hyp=Math.sqrt((a*a)+(b*b));

        System.out.println("Hypotenuse=> "+hyp);
    }
}