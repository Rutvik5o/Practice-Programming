//Delcare an abstract class Vehicle witn an abstract methods name numwheels().
//provide subclasses car & truck that each implementation implements this 
//methods. Create insance of these subclasses & demostrate the use of this method.


abstract class Vehicle
{
    abstract void numwheels();
}

class car extends Vehicle
{
    void numwheels()
    {
        System.out.println("car classes with four wheels");
    }
}

class truck extends Vehicle
{
    void numwheels()
    { 
        System.out.println("Truck classes with six wheels");
    }

}

class U277
{
    public static void main(String []args)
    {
        Vehicle Obj=new car();

        Vehicle Obj2=new truck();
        
        Obj.numwheels();
        
        Obj2.numwheels();
    }
}
