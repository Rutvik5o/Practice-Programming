//A motor cycle dealer sells two-wheelers to his customer on loan, which is to be repaid in 5 years. The dealer charges simple interest
//for the whole term on the day of giving the loan itself. The total amount is then divided by 60(months) and is collected to as 
//euated monthlyy installment(emi). write a program to calculate the emi for a loan of Rs x. where x is given from command line 
//argument print th emi values in rupees.

import java.util.*;

class p3
{
    public static void main(String []args)
    {
        System.out.println("1 Seat Cover=> 15000rs");

        System.out.println("2 Steering wheel Cover=> 15000rs");

        System.out.println("3 Car Lighting=> 7000rs");

        System.out.println("4 Air Purifier =>500rs");

        System.out.println("5 Other Items-> Enter Amount");

        Scanner Obj=new Scanner(System.in);

        int ch=Obj.nextInt();

        double amount;

        switch(ch)
        {
            case 1: amount=15000+(15000*2)/100;
                    System.out.println("Seat Cover total Charges=> "+amount);
                    break;

            case 2: amount=15000+(15000*3)/100;
                    System.out.println("Steering Wheel Cover total charges=> "+amount);
                    break;

            case 3: amount=7000+(7000*4)/100;
                     System.out.println("Car Lighting=> "+amount);
                     break;

            case 4: amount=500+(500*2.5)/100;
                    System.out.println("Air Purifier total charges=> "+amount);
                    break;

            case 5: System.out.println("Enter Item-> ");
                     String  name=Obj.next();

                     System.out.println("Enter amount-> ");

                     double itemAmount=Obj.nextDouble();

                     
                     System.out.println("Calculating........");

                     itemAmount=itemAmount+(itemAmount*1.2)/100;

                     System.out.println(name+" Total Charges=>"+itemAmount);

                     break;

            default:  System.out.println("Sorry! You entered wrong item");
        }


    }
}