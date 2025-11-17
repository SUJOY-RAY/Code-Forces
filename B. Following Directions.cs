using System;

class Problem {
    static void Main() {
        int t = int.Parse(Console.ReadLine());

        while (t-- > 0) {
            int n = int.Parse(Console.ReadLine());
            string s = Console.ReadLine();

            int x = 0, y = 0;
            bool found = false;

            foreach (char c in s) {
                if (c == 'U') y++;
                else if (c == 'D') y--;
                else if (c == 'L') x--;
                else if (c == 'R') x++;

                if (x == 1 && y == 1) {
                    found = true;
                    break;
                }
            }

            Console.WriteLine(found ? "YES" : "NO");
        }
    }
}
