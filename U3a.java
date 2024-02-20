//A car accessories shop assing code 1 to seat conver, 2 to sterring cover, 3 to car lighting & 4 for air
//purifiers. All other items have code 5 or more. While selling the goods, a seller tax of 2% of seat
//covers 3% to steering wheel covers, 4% for car lighting, 2.5% to air pufifers & 1.2% 
//for all other items
//it charges. A lists containg the product code & price is given for making a bill.

//write a java program using switch case statement a preapare a bill.

import java.util.Scanner;

class U3a
{
    public static void main(String []args)
    {
        System.out.println("1 Seat Cover-> 15000rs");

        System.out.println("2 Steering Wheel Cover-> 15000rs");

        System.out.println("3 Car lighting-> 3000rs");

        System.out.println("4 Air purifier-> 6000rs");

        System.out.println("5 Other Item-> ");

        Scanner Obj=new Scanner(System.in);

        int ch=Obj.nextInt();

        double amount;

        switch(ch)
        {
            case 1: amount=15000+(15000*2)/100;
                    System.out.println("Total Charges=> "+amount);
                    break;

            case 2: amount=15000+(15000*3)/100;
                    System.out.println("Total Charges=> "+amount);
                    break;

            case 3: amount=3000+(3000*4)/100;
                    System.out.println("Total Charges=> "+amount);
                    break;

            case 4: amount=6000+(6000*2.5)/100;
                    System.out.println("Total Charges=> "+amount);
                     break;

            case 5: System.out.println("Enter Item-> ");

                     String name=Obj.next();

                     System.out.println("Enter Amount-> ");

                     double ItemAmt= Obj.nextInt();

                     ItemAmt=ItemAmt+(ItemAmt*1.2)/100;

                     System.out.println(name+ " of the total charges=> "+ItemAmt);

                     break;

            default: System.out.println("Sorry! You entered wrong Item");
        }
    }
}