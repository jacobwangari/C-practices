using System;

public class student
{
    public string regno;
    public string name; 
    public double fees_paid;


    public void register_student()
    {
        Console.WriteLine("Enter student registration number : ");
        regno = Console.ReadLine();
        Console.WriteLine("Enter student name : ");
        name = Console.ReadLine();
        Console.WriteLine("Enter amount of fees paid by the student : ");
        fees_paid = Convert.ToDouble(Console.ReadLine());    }
    public void student_details()
    {
        Console.WriteLine("The name of the student is : "+ name);
        Console.WriteLine("The regno of the student is : "+ regno);
        Console.WriteLine("The total fees paid by the student is : "+fees_paid);
    }
    public void paying_fees()
    {
        Console.WriteLine("Enter amount of fees you want to pay :");
        double fees = Convert.ToDouble(Console.ReadLine());
        fees_paid = + fees;
    }
}

    public class Program
    {
        static void Main()
        {
        student[] students;
        students = new student[20];

        for(int i = 0; i < students.Length; i++)
        {
            Console.WriteLine("REGISTER STUDENT {0} ");
            students[i] = new student();
            students[i].register_student();
        }
        }
    }
