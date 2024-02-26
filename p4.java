//write a java program to scan 3 integer values from the command line argument & 
//display the maximum another using conditional operator.


class p4
{
    public static void main(String []args)
    {
        int a,b,c,max;

        a=Integer.parseInt(args[0]);

        b=Integer.parseInt(args[1]);

        c=Integer.parseInt(args[1]);

        max=(a>b)?((a>c)?a:c):((b>c)?b:c);

        System.out.println("Maximum Number=> "+max);
    }

}