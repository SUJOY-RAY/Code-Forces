import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;


public class Is_your_horseshoe_on_the_other_hoof{
	public static void main(String [] srgs){
		Scanner sc=new Scanner(System.in);
		int s1=sc.nextInt();
		int s2=sc.nextInt();
		int s3=sc.nextInt();
		int s4=sc.nextInt();
		
		Set<Integer> uniqueColours=new HashSet<>();
		uniqueColours.add(s1);
		uniqueColours.add(s2);
		uniqueColours.add(s3);
		uniqueColours.add(s4);
		
		int toBuy=4-uniqueColours.size();
		System.out.println(toBuy);
		sc.close();

	}
}
