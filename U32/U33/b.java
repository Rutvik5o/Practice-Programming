package pack2;

import pack1.a;

public class b
{
    public static void main(String []args)
    {
        a Obj1=new a();

        System.out.println("Instance Variable=> "+Obj1.A);

        System.out.println("Instance Method calling");

        Obj1.display();
    }
}