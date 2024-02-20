//write a java program to scan 3 interger value from command line argument 4 display
//the maximum number using conditional operator.

class U4a
{
    public static void main(String []args)
    {
        int a,b,c,max;

        a=Integer.parseInt(args[0]);

        b=Integer.parseInt(args[1]);

        c=Integer.parseInt(args[2]);

        max=(a>b)?((a>c)?a:c):((b>c)?b:c);

        System.out.println("Max is=> "+max);
    }
}