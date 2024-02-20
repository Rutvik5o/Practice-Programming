//write a program to calculate the area of sqaure & reactangle by overlaoding the area method.

class U6a
{
    void area(int l)
    {
        System.out.println("Area of square=> "+(l*l));
    }

    void area(int l,int b)
    {
        System.out.println("Area of square=> "+(l*b));
    }

    public static void main(String []args)
    {
        U6a one =new U6a();
        one.area(10);
        one.area(10,10);
    }
}

