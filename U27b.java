//declare an abstract class vehicle with an abstract methods name numwheels(). provide
//subclasses car & truct that
//each implementation implements this methods. Create instances of the subclasses &
//demostrate the use of this method.


abstract class vehicle
{
    abstract void numwheels();
}

class car extends vehicle
{
    void numwheels()
    {
        System.out.println("Car classes with four wheels");
    }
}


class truck extends vehicle
{
    void numwheels()
    {
        System.out.println("Truck classes with six wheels");
    }
}

class U27b
{
    public static void main(String []args)
    {
        car Obj1=new car();

        Obj1.numwheels();

        truck Obj2=new truck();

        Obj2.numwheels();
    }
}