class Solution {
    static void Main(){
        int n = int.Parse(Console.ReadLine());
        int[] arr = Console.ReadLine()
                           .Split()
                           .Select(int.Parse)
                           .ToArray();
                           
        int maxLen = 1;
        int currLen = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] > arr[i - 1]) {
                currLen++;
            } else {
                currLen = 1;
            }
            maxLen = Math.Max(maxLen, currLen);
        }

        Console.WriteLine(maxLen);
    }
}
