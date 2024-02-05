//write a program that takes a string from the user & validate it.
//the string should be at least 5 characters and should contain
//at least one digit. Display an appopriate valid message.

class ValidateString extends Exception
{
    ValidateString(String s)
    {
        System.out.println("\nString is not valid Bcoz of=> "+s);
    }
}


class U36
{
    public static void main(String []args)
    {
        String s=args[0];

        char c[]=s.toCharArray();

        int flag=0;

        try
        {
            if(s.length()>=5)
            {
                for(int i=0;i<s.length();i++)
                {
                    if(Character.isDigit(c[i]))
                    {
                        flag=1;

                        System.out.println("String is valid");
                        break;
                    }
                }

                if(flag == 0)
                throw new ValidateString(s);
                
            }
            else
            throw new ValidateString(s);
    }
    catch(Exception e) {}
}
}