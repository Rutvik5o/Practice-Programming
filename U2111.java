class U2111
{
    public static void main(String []args)
    {
        int a[]=new int[args.length];

        for(int i=0;i<args.length;i++)
        {
            a[i]=Integer.parseInt(args[i]);

            System.out.println("Array is=> "+ a[i]);
        }

        int temp;

       for(int i=0;i<a.length;i++)
       {
        for(int j=i+1;j<a.length;j++)
        {
         if(a[i]>a[j])
         {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
        }
       }
    }
}