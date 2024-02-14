//the abstract vegetable class  has four subclasses named cabbage, carrot and patato.
//write an application tha demostrate how to estalish this class hieraracy. Declar one 
//instance veriable of type string that indicates the color of a vegetable. create & 
//display instances of these object, override the toString() method of object to 
//return a string with the name of vegetable and its color.

abstract class vegetable
{
    String color;
}

class cabbage extends vegetable
{
    public String toString()
    {
        color= "Green Color";

        return ("Color Of Cabbage=> "+color);
    }
}

class carrot extends vegetable
{
    public String toString()
    {
        color="Red Color";

        return ("Color Of Carrot=> "+color);
    }
}

class patato extends vegetable
{
    public String toString()
    {
        color= "Brown Color";

        return ("Color of Patato=> "+color);
    }
}

class U30u
{
    public static void main(String []args)
    {
        cabbage Obj1=new cabbage();
        System.out.println(Obj1);

        carrot Obj2=new carrot();
        System.out.println(Obj2);

        patato Obj3=new patato();
        System.out.println(Obj3);
    }
}