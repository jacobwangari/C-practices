using System;


namespace ConsoleApp1
{
    class Program
    {
        static void Main()
        {
            // variable declaration and initialization
            int subjects, size;
            double sum, mean;
            int[] marks;
            marks = new int[20]; // subjects cant exceed 20

            //input number of students and subjects
            Console.WriteLine("Input the number of students");
            size = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Input the number subjects done by each student");
            subjects = Convert.ToInt32(Console.ReadLine()); 

            //input subject marks for each student 
            for(int i = 0; i < size; i++)
            {
                sum = 0; mean = 0;
                Console.WriteLine("Input marks for student {0}", i);
                for (int j = 0; j < subjects; j++)
                {
                    Console.WriteLine("Enter marks of student {0} for subject {1}",i,j);
                    marks[j] = Convert.ToInt32(Console.ReadLine());
                    sum = sum + marks[j];
                }
                mean = sum / subjects;
                Console.WriteLine("mean for student {0}",mean);
            }
        }
    }
}
