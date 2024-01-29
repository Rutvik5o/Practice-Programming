//Write a java program to calculate the hypotenuse of right angled 
//triangle when other sides of triangle area given.

import java.util.*;

class U5
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