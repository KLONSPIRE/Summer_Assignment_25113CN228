import java.util.Scanner;

public class Q1 {
    public static long sumN(long n) {
        return n * (n + 1) / 2;
    }

    public static void main(String[] args) {
        try (Scanner s = new Scanner(System.in)) {
            System.out.print("Enter an Integer : ");
            long n = s.nextLong();
            if (n < 1) {
                System.out.println("Given input is not a Natural no.");
                return;
            }
            
        System.out.println("Sum = " + sumN(n));
        }
    }
}