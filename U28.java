//write an interface called exam with a method pass that returns a boolean. Write another interface called
//classify with a (int average) method Divison. which returns a string. Write a class called Result which 
//implements both exam & classify. The pass method should return true if the marks is greather than or equal
//to 35 else false. The divison method must a return "First" when the parameter average is 60 or more "Second"
//when average is 50 or more but below 60", "No Divison" when average is less than 60.

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
             return "First";

        else if (avg<60 && avg>=50)
             return "Second";

        else
             return "No Divison";  
    }
}

class U28
{

    public static void main(String []args)
    {
        result Obj=new result();

        System.out.println("Your Result=> "+Obj.pass(65));

        System.out.println("Your Divison => "+Obj.Divison(75));
    }
}