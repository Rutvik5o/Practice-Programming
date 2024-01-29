//Write a program to calculate the area of square & rectangle byy overlaoding 
//the area method.

class U6
{
    void area(int l)
    {
        System.out.println("Area of square=> "+(l*l));
    }

    void area(int l,int b)
    {
        System.out.println("Area of Square=> "+(l*b));
    }

    public static void main(String []args)
    {
        U6 one=new U6();
        one.area(7);
        one.area(3,25);
        
    }
}