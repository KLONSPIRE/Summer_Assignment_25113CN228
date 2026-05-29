import java.util.Scanner;

public class Q7 {
    public static int prdDigits(long n){
        int prd = 1;
        n = Math.abs(n);
        while(n > 0){
            prd *= n % 10;
            n /= 10;
        }
        return prd;
    }

    public  static void main(String[] args){
        try(Scanner s = new Scanner(System.in)){
            System.out.print("Enter the Number : ");
            long n = s.nextLong();
            System.out.println("Product of Digits = " + prdDigits(n));
        }
    }
}