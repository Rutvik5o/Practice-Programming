package pack2;

import pack1.p3;

public class p3i
{
    public static void main(String []args)
    {
        p3 Obj=new p3();
        System.out.println("\nInstance Variable=> "+Obj.a);
        System.out.println("\nInstance Method Calling");
        Obj.display();
    }
}