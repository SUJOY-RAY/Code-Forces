import java.util.*;

public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int [] sums = new int[4];
        
        for(int i = 0 ;i<4; i++){
            sums[i] = sc.nextInt();
        }
        
        Arrays.sort(sums);
        // 0 = a+b
        // 1 = a+c
        // 2 = b+c
        // 3 = a+b+c
        
        // 3-0 = c
        // 1-c = a
        // 0-a = b
        
        int c = sums[3] - sums[0];
        int a = sums[1] - c;
        int b = sums[0] - a;
        
        
        System.out.println(a + " " + b + " " + c);
        
        
    }
}
