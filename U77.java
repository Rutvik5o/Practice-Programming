class complex
{
    int real,img;

    complex() {}

    complex(int a,int b)
    {
        real=a;
        img=b;
    }

    complex add(complex a,complex b)
    {
        complex temp=new complex();

        temp.real=a.real+b.real;

        temp.img=a.img+b.img;

        return temp;
    }

    complex sub(complex a,complex b)
    {
        complex temp=new complex();

        temp.real=a.real-b.real;

        temp.img=a.img-b.img;

        return temp;
    }

    complex mul(complex a,complex b)
    {
        complex temp=new complex();

        temp.real=a.real*b.real;

        temp.img=a.img*b.img;

        return temp;
    }

    void display()
    {
        System.out.println("Real Part=> "+real+"\nImaginary Part=> "+img+"i");
    }

}

class U77
{
    public static void main(String []args)
    {
        complex c1=new complex(40,30);

        complex c2=new complex(61,36);

        complex c3=new complex();

        c3=c1.add(c1,c2);
        c3.display();

        c3=c1.sub(c1,c2);
        c3.display();

        c3=c2.add(c1,c2);
        c3.display();

        c3=c3.sub(c1,c2);
        c3.display();


    }
}