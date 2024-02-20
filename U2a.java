//a motor cylce dealers sell two-wheels to his customers on loan, which is to be repaid in 5 years/the dealer.
//chareges simple interest for the whole term on day of giving the loan itself, the total amount is then
//divided by 60(months) and its collected so as equated moonthly installment(emi).Write a program to calculate the emi for a  loan dof Rs. x where x is given fromc command line argument.

class U2a
{
    public static void main(String []args)
    {
        int loan=Integer.parseInt(args[0]);

        float rate =Integer.parseInt(args[1]);

        int time=5;

        float si=(loan*rate*time)/100;

        System.out.println("Simple Interest=> "+si);

        float total=si+loan;

        System.out.println("Total Loan=> "+total);

        float emi=total/12;

        System.out.println("Monthly Installment=> "+emi);
        
    }
}