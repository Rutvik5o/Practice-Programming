//write a java program to calculate the hypoetnuse of right angled 
//triangle when other sides of triangle area given.


import java.util.*;

class U5a
{
    public static void main(String []args)
    {
        System.out.println("Enter Value of x & y");

        Scanner Obj=new Scanner(System.in);

        int a=Obj.nextInt();

        int b=Obj.nextInt();

        double hyp=Math.sqrt((a*a)+(b*b));

        System.out.println("Hypotenuse=> "+hyp);
    }
}