using System;


 class circle
{
    // declaring and initializing objects
    double pi = Math.PI;
    double radius;
    double area;
    double circumference;

    //constructor function
   circle(double r)
    {
        radius = r;
        area = 0;
        circumference = 0;
    }

    // method to calculate area
   double getArea()
    {
        area = pi * radius * radius;
        return area;
    }

    //method to calculate circumference
    double getCircumference()
    {
        circumference = pi * 2 * radius;
        return circumference;
    }

    // main function
    static void Main()
    {
        //Get radius input from user
        Console.Write("Enter radius of a circle : ");
        double T = Convert.ToDouble(Console.ReadLine());
        
        //creating circle object
        circle c = new circle(T);

        //outputting results
        Console.WriteLine("Circumference of the circle is : " + c.getCircumference());
        Console.WriteLine("Area of the circle is : "+ c.getArea());
    }
}
    

