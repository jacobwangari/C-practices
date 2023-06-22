using System;

class Program
    {
        static void Main()
        {
        int x;
        double cosine,sine;
        Console.WriteLine("Input a number : ");
        x = Convert.ToInt32(Console.ReadLine());

        cosine = Math.Cos(x);
        sine = Math.Sin(x);
        Console.WriteLine("The cosine of {0} is {1}",x,cosine);
        Console.WriteLine("The sine of {0} is {1}", x, sine);
    }
    }
