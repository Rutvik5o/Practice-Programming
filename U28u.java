//write an interface called exam with a method pass that returns a boolean.
//write another interface called classify with a (int average). method divison.
//which returns a string. Write a class called result which implements both exam & 
//classify. The pass method should return true if the marks is greater than or equal
//to 35 else false. the disivion method must a return "First" whenn the parameter 
//average is 60 or more "Second" when average is 50 or more but below 60, "No Divison"
//when average is less than 50.

interface exam
{
    boolean pass(int marks);
}

interface classify
{
    String division(int avg);
}

class result implements exam,classify
{
    public boolean pass(int marks)
    {
        return marks>=35;
    }

    public String division(int avg)
    {
          if (avg>=60)
          
              return "First";
          
                

        else if(avg<60 && avg>=50)
             return "Second";

        else
            return "No Division";
    }
}

class U28u
{
    public static void main(String []args)
    {
        result Obj=new result();

        System.out.println("Your Result=> "+Obj.pass(65));

        System.out.println("Your Division=> "+Obj.division(75));
    }
}
