//create a package p and withint that package create class PackClass
//which have method called findmax() which find maximum value from three 
//numbers. Now import the package class Democlass and now display
//the maximum Number.

package p;

public class U31
{
    public int findmax(int a,int b,int c)
    {
        int max=(a>b)?((a>c)?a:c):((b>c)?b:c);

        return max;
    }
}