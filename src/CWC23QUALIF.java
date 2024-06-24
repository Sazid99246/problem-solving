import java.util.Scanner;

public class CWC23QUALIF {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        if (n >= 12) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
        s.close();
    }
}
