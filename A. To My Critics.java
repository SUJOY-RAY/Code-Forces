import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        List<int[]> inputs = new ArrayList<>();
        for(int i = 0; i<n; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            inputs.add(new int[]{a, b, c});
        }
        
        
        for(int[] arr: inputs){
            if(
                arr[0] + arr[1] >=10 ||
                arr[1] + arr[2] >=10 ||
                arr[2] + arr[0] >=10
            ){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
        
    }
}
