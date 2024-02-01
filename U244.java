import java.util.Scanner;

class U244
{
    public static void main(String []args)
    {
        Scanner Obj=new Scanner(System.in);

        int p[]=new int[5];

        String n[]=new String[5];

        for(int i=0;i<5;i++)
        {
            System.out.println("Enter the name of the Company-> ");

            n[i]=Obj.next();

            System.out.println("Enter Price Quotoed-> ");

            p[i]=Obj.nextInt();


        }

        int min=p[0];

        for(int i=0;i<5;i++)
        {
            if(min>p[i])
            {
                min=p[i];
            }
        }

        for(int i=0;i<5;i++)
        {
            if(min==p[i])
            {
                System.out.println("The Comapny Quoted Minimum amount=> "+n[i]);
            }
        }
        


    }
}