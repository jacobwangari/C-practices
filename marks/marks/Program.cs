using System;


    class Program
    {
        static void Main()
        {
        //variable declaration and initialization
        int[] marks;
        int sum = 0, min , max;
        marks = new int[20];
        double avarage;
        Console.WriteLine("Enter marks for 10 students : ");

        //Taking user input
        for(int i = 0; i < 10; i++)
        {  Console.WriteLine("marks for student {0}",i); 
           marks[i] = Convert.ToInt32(Console.ReadLine());
            sum += marks[i];
        }
        //initializing  min and max
        max = marks[0];
        min = marks[0];

        //finding min and max values
        for (int j = 1; j < 10; j++)
        {
            if (marks[j] < min) { min = marks[j]; }
            if (marks[j] > max) { max = marks[j]; }
        }

        // calculating the avarage
        avarage = sum / 10;

        //printing the results
        Console.WriteLine("the avarage is : {0} ",avarage);
        Console.WriteLine("the sum is : {0} ", sum);
        Console.WriteLine("the minimum is : {0} ", min);
        Console.WriteLine("the maximum is : {0} ", max);
        
    }
    
    }

