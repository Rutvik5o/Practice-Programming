class calamount
{
    double p,r,n;

    calamount(double a,double b,double c)
    {
        p=a;
        r=b;
        n=c;
    }

    void callint()
    {
        double ci=p*(Math.pow((1+(r/100)),n));

        double netv=p+ci;

        System.out.println("Interest is=> "+ci+" & Amount Received is=> "+netv);
    }
}

class U99
{
    public static void main(String []args)
    {
        double p=5000,r=6.5,n=5;

        calamount Obj=new calamount(p,r,n);

        Obj.callint();
    }
}