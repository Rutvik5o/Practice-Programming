//Write a program that accpect a string from command line and perform following operations:

//1.display each character on seperate line in reverse order.
//2.count total number fo character & display each character's position too.
//3.Identif the whether the string is palindrome or not.
//4.Count total number of uppercase & lowercase character in it.

class p4
{
    public static void main(String []args)
    {
        char c[]=args[0].toCharArray();

        System.out.println("\nDisplay Each characteer on seperate line in reverse order");

        for(int i=0;i<c.length;i++)
        {
            System.out.println(c[i]);
        }

        System.out.println("\nCount Total Number of character & display each characters' position");

        System.out.println("\nTotal Number of Character's Are=> "+c.length);
        

        for(int i=0;i<c.length;i++)
        {
            System.out.println(c[i]+ " Character On=> "+i+" Position");
        }

        System.out.println("\nIndentify the String is palindrome or not");

        String orgStr,revStr="";

        orgStr=args[0];

        int len=orgStr.length();

        for(int i=len-1;i>=0;i--)
        {
            revStr=revStr+orgStr.charAt(i);
            System.out.println("\nReverse String=> "+revStr);
        }

        if(orgStr.equals(revStr))
    {
        System.out.println("\nString is palindrome");
    }
    else
    {
        System.out.println("\nString is not palindrome");
    }

    System.out.println("\nTotal Number of UpperCase & LowerCase Characters");

    int up=0,lw=0;

    for(int i=0;i<c.length;i++)
    {
        if(Character.isUpperCase(c[i]))
        up++;
        else
        lw++;
    }

    System.out.println("UpperCase Character Are=> "+up);

    System.out.println("LowerCase Character Are=> "+lw);
    }
}