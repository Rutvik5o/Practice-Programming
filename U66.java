class U66
{
    void area(int l)
    {
        System.out.println("Area Of Square=> "+(l*l));
    }

    void area(int l,int b)
    {
        System.out.println("Area Of Square=> "+(l*b));
    }

    public static void main(String []args)
    {
        U66 one=new U66();

        one.area(10);

        one.area(51,15);
    }
}