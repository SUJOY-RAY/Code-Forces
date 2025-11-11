import java.util.*;


public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int  n = sc.nextInt();
        sc.nextLine();
        String[] inputs = new String[n];
        
        for(int i = 0;i<n ;i++){
            inputs[i] = sc.nextLine();    
        }
        for(String s: inputs){
            if(s.equalsIgnoreCase("YES")){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }
}
