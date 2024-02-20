//write a program to display 2 i.e. 2,4,6,8,9 etc.. up to 1028 using bitwise operator.

class U10a
{
    public static void main(String []args)
    {
        int x=1;

        for(int i=0;i<10;i++)
        {
            x=x<<1;

            System.out.println(x);
        }
    }


}