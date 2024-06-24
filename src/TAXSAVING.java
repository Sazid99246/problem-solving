import java.util.Scanner;

public class TAXSAVING {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
		
		int t = scanner.nextInt();
		for(int i = 0; i < t; i++) {
		    int y = scanner.nextInt();
		    int x = scanner.nextInt();
		    System.out.println(y - x);
		}
        scanner.close();
    }
}
