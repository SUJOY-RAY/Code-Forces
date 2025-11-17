import java.util.*;

public class Main{
    public static void main(String [] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        
        String[] letters = new String[n];
        for(int i = 0; i < n; i++){
            letters[i] = sc.nextLine();
        }
        String input = "codeforces";
        
        for(String letter: letters){
            if(input.contains(letter)){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }
}
