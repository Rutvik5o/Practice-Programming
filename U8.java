//A shop duing fesitval season offers a discount 10% for purchase made up to Rs. 1000 ,12% for  
//purchase value for Rs. 1000 or more up to Rs. 1500 & 15 % for purchase vlye of Rs. 1500 ore more
//write a program to implement the above scheme for a given sales & print out the sales and
//print out the sales value, discount and net amount payable by a customer. Create necessary methods 
//add constructors.

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

        else if(sv>=1000 && sv<=1500)
        {
            dis=12;
        }

        else
        {
            dis=15;
        }
    

     netv=sv-((sv*dis/100));

     System.out.println("Ater discount net value "+sv+" is "+"=> "+netv);
    }

}

class U8
{
    public static void main(String []args)
    {
        int n;

        Scanner Obj=new Scanner(System.in);

        System.out.println("Enter Purchase Value-> ");

        n=Obj.nextInt();

        calcost Obj1=new calcost();

        Obj1.netpay(n);


    }
}