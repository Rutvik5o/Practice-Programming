//write a program that takes a string from the user & validate it.
//the string should be at least 5 characters and should containt 
//as least one digit. Display an appropritate valid message.

class ValidateString extends Exception
{
    ValidateString(String s)
    {
        System.out.println("String is not valid Bcoz => "+s);
    }

}

class f6
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

                if(flag==0)
                {
                    throw new ValidateString(s);
                }
            }
            else 
               throw new ValidateString(s);
        }
        catch(Exception e) {}
    }
}