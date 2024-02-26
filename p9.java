//a bank gives 6.5% per annum interest on depends made in that bank, write a program to calculate
//the total amount that a person will receive after the end of 5 years of a deposit of Rs. 5000
//for Rs. 5000 for compound interest. Create Necessary method & constructor too.


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

        double netvalue=p+ci;

        System.out.println("Interest is=> "+ci+" & amount received is=> "+netvalue);
    }
}

class p9
{
    public static void main(String []args)
    {
        double p=5000,r=6.5,n=5;

        calamount Obj=new calamount(p,r,n);

        Obj.callint();
    }
}