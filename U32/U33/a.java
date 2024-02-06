//(3)=> Create Packages pack1 withing this package create class A which contains 
//one instance variable and one instance method. Create another package 
//pack2 within this package create class B. Where class B is calling 
//the method and variable of class A.

package pack1;

public class a
{
    public int A=10;

    public void display()
    {
        System.out.println("Class A of Package Pack1");
    }
}