//create class calculation with an abstract method area(). 
//create rectangle and triangle subclasses of calculation & find area
//of rectangle & triangle.


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
        System.out.println("Area of reactangle=> "+(l*b));
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
        System.out.println("\nArea of Triangle=> "+((l*b)/2));
    }
    
    
}

class U29u
{
    public static void main(String []args)
    {
        rect Obj1=new rect(5,8);

        Obj1.area();

        tri Obj2=new tri(7,2);
        
        Obj2.area();
    }
}