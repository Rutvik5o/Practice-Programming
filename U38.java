//(8)=>Write a program which takes the age of 5 persons from command line and find 
//the average age of all persons. The program should handle exception if the 
//argument is not correctly formatted and customer exception if the age is not
//between 1 to 100.

class RangeException extends Exception
{
    RangeException(String message)
    {
        super(message);
    }
}

class U38
{
    public static void main(String []args)
    {
        int a[]=new int [5];

        int sum=0;

        try
        {
            for(int i=0;i<5;i++)
            {
                a[i]=Integer.parseInt(args[i]);

                if(a[i]<0 || a[i]>100)
                {
                    throw new RangeException("Invalid Range=> "+a[i]);
                }
            }
            
            for(int i=0;i<5;i++)
            {
                sum+=a[i];
            }

            System.out.println("Average is=> "+(sum/5));
        }

        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("Array Index Out Of Bounds Exception "+ "Enter Comamnd Line Argument");
        }

        catch(NumberFormatException e)
        {
            System.out.println("Number Format Exception"+ "Enter Numbers Only");
        }

        catch(RangeException e1)
        {
            System.out.println("Error=> "+e1.getMessage());
        }
    }
}