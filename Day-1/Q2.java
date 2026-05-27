import java.util.Scanner;

public class Q2 {
    public static void table(int n) {
        for (int i = 1; i <= 10; i++)
            System.out.println(n + " x " + i + " = " + n * i);
    }

    public static void main(String[] args) {
        try (Scanner s = new Scanner(System.in)) {
            System.out.print("Enter an Integer : ");
            int n = s.nextInt();
            table(n);
        }
    }
}