//write an application that converts between meters and feet. Its first command line argument
//is a number and second command line argument is either "Centimeter" or "meter". if the arugment
//equal "Centimeter" display a string reporting the equivalent number of meters. If this argument
//equal "meters",display a string reporting this equivalnet number of centimeter. if unit is not
//given properly than generate customer exception UnitFormatException. if first argument is not proper
//format then generate NumberFormatException generic other Exception as per Requirement.
//(1 meter= 1000 Centimeter).

class UnitFormatException extends Exception
{
    UnitFormatException()
    {
        super("UnitFormatException: Unit is not valid");
    }
}

class f9
{
    public static void main(String []args)
    {
        int no;

        String u;

        try
        {
            no=Integer.parseInt(args[0]);

            u=args[1];

            if((u.equals("Centimeter")) || (u.equals("Meter")))
            {
                if(u.equals("Centimeter"))
                {
                    int m=no/100;

                    System.out.println("Equivalent number of meter=> "+m);
                }
                else
                {
                    int cm=no*100;

                    System.out.println("Equivalnet Number of Centimeter=> "+cm);
                }
            }
            else 
                throw new UnitFormatException();
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("Enter Command line argument");
        }
        catch(NumberFormatException e2)
        {
            System.out.println("Enter Numbers Only");
        }
        catch(UnitFormatException e3)
        {
            System.out.println("Error=> "+e3.getMessage());
        }
    }
}