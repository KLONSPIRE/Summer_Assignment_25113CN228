import java.util.Scanner;

public class Q5 {
    public static int sumDigits(long n){
        int sum = 0;
        n = Math.abs(n);
        while(n > 0){
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    public  static void main(String[] args){
        try(Scanner s = new Scanner(System.in)){
            System.out.print("Enter the Number : ");
            long n = s.nextLong();
            System.out.println("Sum of Digits = " + sumDigits(n));
        }
    }
}