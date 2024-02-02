//Declare an abstract class vehicle witn an abstract methods name numwheels(). provide subclasses car & truck that
//each implementation implements this methods . Create instance of the subclasses & demostrate the use of this method.


abstract class vehicle
{
    abstract void numwheels();
}


class car extends vehicle
{
    void numwheels()
    {
        System.out.println("Car classs with four wheels");
    }
}

class truck extends vehicle
{
     void numwheels()
     {
        System.out.println("Truck class within six wheels");
     }
}

class U27
{
    public static void main(String []args)
    {
        car Obj1=new car();
        
        Obj1.numwheels();

        truck Obj2=new truck();

        Obj2.numwheels();
    }
}