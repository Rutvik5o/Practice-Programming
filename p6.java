//write a program to calculate the area of square & rectangle overloading the area method.

class p6
{
    void area(int l)
    {
        System.out.println("Area of square=> "+(l*l));

    }

    void area(int l,int b)
    {
        System.out.println("Area of Rectangle=> "+(l*b));
    }

    public static void main(String []args)
    {
        p6 one=new p6();

        one.area(6);

        one.area(8,8);
    }
}
