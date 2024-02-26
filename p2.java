//A motor cycle deler selle to two whllers to his customer on loan,which is to repiad in 5 years. te dealer 
//day of giving the loan itself. The total amount in rate.


class p2
{
    public static void main(String []args)
    {
        int loan=Integer.parseInt(args[0]);

        float rate=Float.parseFloat(args[1]);

        int time=5;


        float si=(loan*rate*time)/100;

        System.out.println("Simple Interest=> "+si);

        float total=loan+si;

        System.out.println("Total Loan=> "+total);

        float emi=total/12;

        System.out.println("EMI=> "+emi);




    }
}