using System;


namespace array_multiple
{
    internal class Program
    {
        static int[] arry;
        public static int Multiple(int x, int y)
        {
            arry = new int[y];
            for (int i = 1; i < y; i++)
            {
                arry[i] = x * i;
            }
            return arry.Length;
        }
        public static void Main()
        {
           Console.WriteLine(Multiple(7, 5));
            foreach(int i in arry)
            {
                Console.WriteLine(arry[i]);
            }
            
        }
    }
}
