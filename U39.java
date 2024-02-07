//(9)Write an application that converts between meters and feet. Its first command line argument
//is a number and second commandd line argument is either "Centimeter" or "meter". If the argument
//equal "Centimeter" display a string Reporting the equivalent number of meters. If this argument
//equals "meters", display a string Reporting the equivalent number of centimeter . If unit is not
//given prperly then generate custom exception UnitformatException. If first argument is not proper
//format then generate NumberFormateException generic other Exception as per Requirement .
//(1 meter = 1000 centimeter).


class UnitFormatException extends Exception
{
    UnitFormatException()
    {
        super("UnitFormatException: Unit is not valid");
    }
}

class U39
{
    public static void main(String []args)
    {
        int no;

        String u;

        try
        {
            no=Integer.parseInt(args[0]);
            u=args[1];

            if((u.equals("Centimeter")) || (u.equals("meter")))
            {
                if(u.equals("Centimeter"))
                {
                    int m=no/100;

                    System.out.println("\nEquivalent Number Of Meter=> "+m);


                }
                else
                {
                    int cm=no*100;

                    System.out.println("\nEqivalent Number Of Centimeter => "+cm);
                }
            }
           else
               throw new UnitFormatException();

        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("Array Index out Of Bounds Exception Occurss");
        }
        catch(NumberFormatException e)
        {
            System.out.println("Number Format Exception Occurs");
        }
        catch(UnitFormatException e1)
        {
            System.out.println("Error=> "+e1.getMessage());
        }
       
    }
}