//Write an application that accpet marks of three differnet subject from user.
//marks shuld be between 0 to 100. If marks of any of the subject is not belong
//to this range. Generate customer Exception out of RangeException.If marks of 
//each subjects are greater than or equal to 40 then display message "Pass" along
//with percentage otherwise display message "Fail". Also write exception handling 
//code to catch all the possible RunTime Exceptions likely to be generated
//in the program.

class RangeException extends Exception
{
    RangeException (int i)
    {
        super("Range Exception: Marks is not valid");
    }
}

class U37
{
    public static void main(String []args)
    {
        int a[]=new int [3];

        int sum=0;

        float percentage;

        for(int i=0;i<3;i++)
        {
            try
            {
                a[i]=Integer.parseInt(args[i]);

                if(a[i]<0 || a[i]>100)
                    throw new RangeException(a[i]);

                else if(a[i]>=40)
                {
                    sum+=a[i];
                    System.out.println("Pass In Subject=> "+i);
                }

                else
                {
                    System.out.println("Fail In Subject=> "+i);
                }
               
            }

            catch(RangeException e)
            {
                System.out.println("Error=> "+e.getMessage());
            }

            catch(ArrayIndexOutOfBoundsException e1)
            {
                System.out.println("Array Index Out Of Bounds");
                break;
            }

            catch(NumberFormatException e2)
            {
                System.out.println("Number Format Exception");
            }
        }

        percentage=(float)sum/3;

        System.out.println("Percentage=> "+percentage);
    }
}