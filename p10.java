//write a programm to diplay of 2 ie.e 2,4,6,8,16 etc... up to 1024 using bitwise operator.

class p10
{
    public static void main(String []args)
    {
        int x=1;

        for(int i=0;i<=10;i++)
        {
            x=x<<1;

            System.out.println(x);
        }
    }
}