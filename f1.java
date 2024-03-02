//createa package p and within that package createa class prackclass which have method
//called finmax() which find maximum value three numbers. Now import the package class 
//and now display the maximum number.


package fone;

public class f1
{
    public int findmax(int a,int b,int c)
    {
        int max=(a>b)?((a>c)?a:c):((b>c)?b:c);
        
        return max;
    }
}