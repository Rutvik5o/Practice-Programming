package fthreei;

import fthree.f3;

public class f3i
{
    public static void main(String []args)
    {
        f3 Obj=new f3();
        System.out.println("Instance Variable=> "+Obj.a);

        System.out.println("Instace Method Calling");

        Obj.display();
    }
}