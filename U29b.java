//create class calculation with an abtract method area(). create rectangle and 
//trinalge subclasses
//of calculation & find area of rectangle & triangle.

abstract class calculation
{
    int l,b;

    abstract void area();
}

class rect extends calculation
{
    rect(int p,int q)
    {
        l=p;
        b=q;
    }

    void area()
    {
        System.out.println("Area of rectangle=> "+(l*b));
    }
}

class tri extends calculation
{
    tri(int p,int q)
    {
        l=p;
        b=q;
    }

    void area()
    {
        System.out.println("Area of Triangle=> "+(l*b)/2);
    }
}

class U29b
{

    public static void main(String []args)
    {
        rect r=new rect(5,3);

        tri t=new tri(63,626);

        r.area();

        t.area();
    }

}