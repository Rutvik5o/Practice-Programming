import java.util.*;


class U55
{
    public static void main(String []args)
    {

    Scanner Obj=new Scanner(System.in);

    System.out.println("Enter Two Values-> ");

    int a=Obj.nextInt();

    int b=Obj.nextInt();

    double hyp=Math.sqrt((a*a)+(b*b));

    System.out.println("Hypotenuse=> "+hyp);
    }
}