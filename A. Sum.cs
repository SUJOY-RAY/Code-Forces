using System;

class Program
{
    static void Main()
    {
        int t = int.Parse(Console.ReadLine());

        for (int i = 0; i < t; i++)
        {
            var parts = Console.ReadLine().Split();
            int a = int.Parse(parts[0]);
            int b = int.Parse(parts[1]);
            int c = int.Parse(parts[2]);

            if (a + b == c || a + c == b || b + c == a)
                Console.WriteLine("YES");
            else
                Console.WriteLine("NO");
        }
    }
}
