//write a program that accpect a string from command line arguemnt and perform
//follwing operations:


//(1) Display each character on seperate line in reverse order.
//(2) count total number of characters & display each character' position too.
//(3) indentify the whether the string is palindrome or not.
//(4) total number of UpperCase & LowerCase chaacter in it.

class f4
{
    public static void main(String []args)
    {
        char c[]=args[0].toCharArray();

        System.out.println("Display Each Character on seperate line in reverse order");

        for(int i=0;i<c.length;i++)
        {
            System.out.println(c[i]);
        }

        System.out.println("\nCount total number of character & display each Character's position");

        System.out.println("Total Number of character's Are=> "+c.length);

        for(int i=0;i<c.length;i++)
        {
            System.out.println(c[i]+ " Character On=> "+ i + " Position");
        }

        System.out.println("Indentify the string is palindrome or not");

        String orgStr,revStr="";

        orgStr=args[0];

        int len=orgStr.length();

        for(int i=len-1;i>=0;i--)
        {
            revStr=revStr+orgStr.charAt(i);
            System.out.println("Reverse String => "+revStr);
        }

        if(orgStr.equals(revStr))
             System.out.println("String is palindrome");
        else
             System.out.println("String is palindrome");

      System.out.println("Total Number of UpperCase & LowerCase Characters");

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