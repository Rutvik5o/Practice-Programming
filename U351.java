//(5)=>Write a java program a input n integer number and display lowest and second
//lowest number. Also handle the different exception posssible to thrown
//during execution

class U351
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
            System.out.println("Printing Error-> 'ArrayIndexOutOfBoundsException' "+"Enter Command line argument");
        }
        catch(NumberFormatException e1)
        {
            System.out.println("Printing Error-> 'NumerFormatException'" +"Enter Number Only");
        }
    
    }
}