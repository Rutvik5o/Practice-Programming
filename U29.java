//create class calculation with an abstract method area(). Create Rectangle and triangle subclasses
//of calculation & find area of Rectangle & triangle.

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
       System.out.println("Area Of Rectangle=> "+(l*b));
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
        System.out.println("Area Of Trianlge=> "+((l*b)/2));
    }
}

class U29
{
    public static void main(String []args)
    {
        rect r=new rect(5,8);

        tri t=new tri(61,636);

        r.area();

        t.area();
    }
}