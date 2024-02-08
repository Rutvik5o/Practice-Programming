/* Write an interface called numbers, with a methods in process(int x,int y)
write a class called sum,which in the method process finds hte sum of two numbers and
return an int values. Wirte another class called average, in which the process methods
finds the average of the two number and int.
 */

 import java.util.*;

interface Numbers
{
    int process(int x,int y);
}

class sum implements Numbers
{
    public int process(int x,int y)
    {
        return (x+y);
    }
}

class average implements Numbers
{
    public int process(int x,int y)
    {
        return ((x+y)/2);
    }
}

class U25555
{
    public static void main(String []args)
    {
        int x,y;

        sum s1=new sum();

        average a1=new average();

        Scanner Obj=new Scanner(System.in);

        System.out.println("Enter Two Values-> ");

        x=Obj.nextInt();

        y=Obj.nextInt();

        System.out.println("Sum => "+s1.process(x,y));

        System.out.println("Average=> "+a1.process(x,y));

    }
}