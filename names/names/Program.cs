using System;


    class Program
    {
        static void Main()
        {
        string fname, lname, name;
        int len;
        Console.WriteLine("Input your first name");
        fname = Console.ReadLine();
        Console.WriteLine("Input your last name");
        lname = Console.ReadLine();

        name = fname + "  " + lname;
        len = fname.Length + lname.Length;

        Console.WriteLine("You name is : {0}" ,name);
        Console.WriteLine("length of your name is : {0}", len);

    }
    }

