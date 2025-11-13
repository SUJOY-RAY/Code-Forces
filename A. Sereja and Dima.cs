class Program{
    static void Main(){
        var n = int.Parse(Console.ReadLine());
                           
        var numbers = Console.ReadLine()
                             .Split()
                             .Select(int.Parse)
                             .ToArray();
        int i = 0, j = n - 1;
        int sereja = 0, dima = 0;
        bool turnSereja = true;
        
        while(i <= j){
            int chosen;
            if(numbers[i] > numbers[j]) {
                chosen = numbers[i];
                i++;
            } else{
                chosen = numbers[j];
                j--;
            }
            
            if(turnSereja){
                sereja += chosen;
                
            } else{
                dima += chosen;
            }
            turnSereja = !turnSereja;
        }
        Console.WriteLine($"{sereja}{dima}");
    }
}
