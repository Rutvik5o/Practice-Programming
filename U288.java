interface exam
{
    boolean pass(int marks);
}

interface classify
{
    String Divison(int avg);
}

class result implements exam,classify
{
    public boolean pass(int marks)
    {
        return marks>=35;
    }

    public String Divison(int avg)
    {
        if(avg>=60)
        return "first";

        else if(avg<60 && avg>=50)
        return "Second";

        else 
        return "No Divison";

    }
}

class U288
{
    public static void main(String []args)
    {
        result Obj=new result();

        System.out.println("Your Result=> "+Obj.pass(75));

        System.out.println("Your Divison=> "+Obj.Divison(85));
    }
}