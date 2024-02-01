import java.util.Scanner;

interface numbers
{
    int process(int x,int y);
}

class sum implements numbers
{
    public int process(int x,int y)
    {
        return (x+y);
    }
}

class average implements numbers
{
        public int process(int x,int y)
        {
            return ((x+y)/2);
        }
}

class U255
{
    public static void main(String []args)
    {
        int x,y;

        Scanner Obj=new Scanner(System.in);

        sum s=new sum();
        average a=new average();

        System.out.println("Enter Two Values-> ");

        x=Obj.nextInt();

        y=Obj.nextInt();

        System.out.println("Sum=> "+s.process(x,y));

        System.out.println("Average=> "+a.process(x,y));




    }

}