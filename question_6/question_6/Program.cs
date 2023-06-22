using System;



public class xyz
{
    public int x;
    public int y;
    public int z;

    // parameterized constructor
    public xyz(int x, int y, int z)
    {
        this.x = x;
        this.y = y;
        this.z = z;
    }

    //copy constructor
    public xyz(xyz jac)
    {
        x = jac.x;
        y = jac.y;
        z = jac.z;
    }

    //output object values
    public void test()
    {
        Console.WriteLine(x);
        Console.WriteLine(y);
        Console.WriteLine(z);
    }
}
    internal class Program
    {
        static void Main()
        {
        //objects to invoke the constructors

        xyz mwas = new xyz(3,4,5);
        xyz jacmwas = new xyz(mwas);

        jacmwas.test();        }
    }

