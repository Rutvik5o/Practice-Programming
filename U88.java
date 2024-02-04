import java.util.*;

class calcost
{
    int sv,dis;

    float netv;

    calcost()
    {
        sv=0;
        dis=0;
        netv=0;
    }

    void netpay(int sv)
    {
        if(sv<=1000)
        {
            dis=10;
        }

        else if(sv>=100 && sv<=1500)
        {
            dis=12;
        }
        
        else
        {
            dis=15;
        }

        netv=sv-((sv*dis)/100);

        System.out.println("After discount net value of => "+sv+" is =>"+netv);
    }
}

class U88
{
    public static void main(String []args)
    {
        Scanner Obj=new Scanner(System.in);

        System.out.println("Enter Purchase value-> ");

        int n=Obj.nextInt();

        calcost Obj2=new calcost();

        Obj2.netpay(n);
    }
}