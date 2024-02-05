//write a java program to input n integers number and display lowest and second lowest
//number. Also handle the different exceptions possibel to be thowrn during execution.


class U35
{
    public static void main(String []args)
    {
        int a[]=new int[args.length];

        try
        {
            for(int i=0;i<args.length;i++)
            {
                a[i]=Integer.parseInt(args[i]);
            }

            for(int i=0;i<args.length;i++)
            {
                for(int j=i+1;j<args.length;j++)
                {
                    if(a[i]>a[j])
                    {
                        int temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
            }

            System.out.println("Lowest=> "+a[0]+" Second Lowest=> "+a[1]);
        }

        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("Printing Error=> 'Array Index Out Of Bounds Exception'"+"Enter Command Line Arugment");
        }

        catch(NumberFormatException e)
        {
            System.out.println("Printing Error-> 'Number Format Exception"+ "Enter Number Only");
        }


    }
}