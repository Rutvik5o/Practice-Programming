//Delacre an abstract class vehicle with a abstract methods name numwheels(). 
//provide subclasses car and truck that each implements this methods. Create instances
//of these subclasses and demostrate the use of this method.


abstract class Vehicle
{
    abstract void numwheels();
}

class car extends Vehicle
{
    void numwheels()
    {
        System.out.println("Car classes with four wheels");
    }
}

class truck extends Vehicle
{
    void numwheels()
    {
        System.out.println("Truck class with six methods");
    }
}

class U27u
{
    public static void main(String []args)
    {

        car Obj1=new car();
        Obj1.numwheels();

        truck Obj2=new truck();
        Obj2.numwheels();

    }
}

