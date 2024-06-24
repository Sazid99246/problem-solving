import java.util.Scanner;

public class CLEARDAY {
    public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scanner = new Scanner(System.in);
		int d1 = scanner.nextInt();
		int d2 = scanner.nextInt();
		
		System.out.println(7 - (d1 + d2));
        scanner.close();
	}
}
