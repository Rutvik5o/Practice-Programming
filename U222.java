class U222
{
    public static void main(String []args)
    {
        int loan=Integer.parseInt(args[0]);

        float rate=Float.parseFloat(args[1]);

        int time=5;

        float si=(loan*rate*time)/100;


        System.out.println("Simple Interest=> "+ si);

        float total= si+loan;

        System.out.println("Total Amount=> "+total);

        float emi=total/12;

        System.out.println("Monthly Installment=> "+emi);

    }
    }


