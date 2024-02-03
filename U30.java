//The abstract vegetable class has four subclasses named cabbage, carraot and patato. Write an application that 
//demostrate how to establish this class hierarcy. Declare one instance variable of type string that indicates the color of
//a vegeteable. Create & display instances of these object. Override the ToString() method of object o return a 
//string with the name of vegetable and its color.


abstract class vegetable
{
    String color; //Instance Variable
}

class cabbage extends vegetable
{
    public String toString()
    {
        color= "Green Color";

        return("Color Of Cabbage=> "+color);
    }
}

class carrot extends vegetable
{
    public String toString()
    {
        color="Red Color";

        return("Color Of Carrot=> "+color);
    }
}

class patato extends vegetable
{
    public String toString()
    {
        color="Brown Color";

        return ("Color Of Patato=> "+color);
    }
}

class U30
{
    public static void main(String []args)
    {
        cabbage Obj=new cabbage();

        System.out.println(Obj);

        carrot Obj1=new carrot();

        System.out.println(Obj1);

        patato Obj2=new patato();

        System.out.println(Obj2);
    }
}