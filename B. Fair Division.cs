class Problem{
    static void Main() {
        int t = int.Parse(Console.ReadLine());
        while (t-- > 0){
            int n = int.Parse(Console.ReadLine());
            int[] candies = Console.ReadLine().Split().Select(int.Parse).ToArray();
            int c1 = candies.Count(x => x==1);
            int c2 = candies.Count(x => x==2);
            
            int total = c1 + 2 * c2;
            
            if(total % 2 == 1) {
                Console.WriteLine("NO");
                continue;
            }
            
            int half = total / 2;
            if(half % 2 == 1 && c1 == 0) {
                Console.WriteLine("NO");
            }
            else {
                Console.WriteLine("YES");
            }
        }
    }
}
