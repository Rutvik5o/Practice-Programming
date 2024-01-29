//A car accessories shop asign code 1 to seat convers, 2 to steering cover, 3 to car lighting & 4 for air 
//purifiers.All other itmes have code 5 or more. While selling the goods , a sellers tax of 2% of seat
//Covers 3% to steering wheel covers, 4% to car lighting ,2.5% to air purifier & 1.2% for all other items
//is charged. A list containing the product code & price is givne for making a bill. Wirte a java program using 
//Switch case statement a prepare a bill.

import java.util.*;

class U3
{
    public static void main(String []args)
    {
        System.out.println("1 Seat Cover-> 15000rs");

        System.out.println("2 Steering Wheel Cover-> 15000rs");

        System.out.println("3 Car Lighting -> 3000rs");

        System.out.println("4 Air Purifier-> 6000rs");

        System.out.println("5 Other Item");

        Scanner Obj=new Scanner(System.in);

        int ch=Obj.nextInt();

        double amount;

       switch(ch)
       {
             case 1: amount=15000+(15000*2)/100;
                      System.out.println("Total Charge=> "+amount);
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

                     System.out.println(name+" of the Total Charges=> "+ItemAmt);

                     break;

             default: System.out.println("Sorry!! You Entered Wrong Item");
       }

    }
}