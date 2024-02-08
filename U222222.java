/* Write a program to create an array to store 5 integer values.
 * Also intialize the array with 5 number and display the array elements in reverse order.
 */

 import java.util.*;


class U222222 {

    public static void main(String []args)
    {
         Scanner Obj=new Scanner(System.in);

         int a[]=new int[5];

         for(int i=0;i<=4;i++)
         {
            System.out.println("Enter the value of an array-> ");

            a[i]=Obj.nextInt();
         }

         for(int i=4;i>=0;i--)
         {
            System.out.println("Reverse number of an array=> "+a[i]);
         }
    }
    
}
