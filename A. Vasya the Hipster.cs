class Problem {
    static void Main() {
        var socks = Console.ReadLine()
                           .Split()
                           .Select(int.Parse)
                           .ToArray();
        
        var result = new int[2];
        
        while(socks[0] != 0 && socks[1] != 0) {
            result[0]++;
            
            socks[0]--;
            socks[1]--;
        }
        
        int rem = Math.Max(socks[0], socks[1]);
        result[1] = rem / 2;
        
        
        Console.WriteLine($"{result[0]} {result[1]}");
    }
}
