//A motor cycle dealer seels two-wheelers to his customers on loan, which is to be repaid in 5 years / the dealer
//charges simple interest for teh whole term on the day of giving the loan itself. The total amonnt is then 
//divided by 60(months) and is collected to as equated monthly installment(emi). Write a program
//to calculate the emi for a loan of Rs X. where x is given from commdna line argument . print the emi values in rupes.

class U2
{
    public static void main(String []args)
    {
            int loan=Integer.parseInt(args[0]);

            float rate=Integer.parseInt(args[1]);

            int time=5;

            float si=(loan*rate*time)/100;

            System.out.println("\nSimple Interest=> "+si);

            float total =si+loan;

            System.out.println("Total Loan=> "+total);

            float emi=total/12;

            System.out.println("Monthly Installment=> "+emi);


    }
}