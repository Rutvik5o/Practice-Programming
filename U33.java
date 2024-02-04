import java.util.*;

class U33
{
    public static void main(String []args)
    {
        System.out.println("1 Seat Cover-> 12000rs");

        System.out.println("2 Sterring Cover-> 4500rs");

        System.out.println("3 Car lighting-> 1400rs");

        System.out.println("4 Air Purifier-> 400rs");

        System.out.println("5 Other Item:");

        Scanner Obj=new Scanner(System.in);

        int ch=Obj.nextInt();

        double amount;

        switch(ch)
        {
            case 1: amount=12000+(12000*2)/100;
                    System.out.println("Toatl Charges=> "+amount);
                    break;

            case 2 : amount= 4500+(4500*3)/100;
                     System.out.println("Total Charges=> "+amount);
                    break;

            case 3: amount= 7400+(7400*2.5)/100;
                    System.out.println("Total Charges=> "+amount);
                    break;

            case 4: amount= 400+(400*1.2)/100;
                    System.out.println("Total Charges=> "+amount);

            case 5: System.out.println("Enter Item Name:");

                     String name=Obj.next();

                     double ItemAmt;

                     System.out.println("Enter Amount-> ");

                     ItemAmt=Obj.nextInt();

                     ItemAmt=ItemAmt+(ItemAmt*1.2)/100;

                     System.out.println("Total Charges=> "+ItemAmt);

                     break;

                default: System.out.println("Sorry! You Entered Wrong Item");
        }


    }
}