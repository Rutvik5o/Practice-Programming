//create a package p and within that package create class PackClass which have method called findmax().
//which find maximum value from three numbers. Now import the package within another class democlass 
//& now display the maximum number.


package p;

public class p1
{
    public int findmax(int a,int b,int c)
    {
        int max=(a>b)?((a>c)?a:c):((b>c)?b:c);
        return max;
    }
}