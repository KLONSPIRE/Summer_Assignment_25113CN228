import java.util.Scanner;

public class Q8{
    public static long Reverse(long n){
        long rev = 0;
        n = Math.abs(n);
        while(n > 0){
            rev *= 10;
            rev += (int)(n % 10);
            n /= 10;
        }
        return rev;
    }

    public static void main(String[] args){
        try(Scanner s = new Scanner(System.in)){
            System.out.print("Enter a Number : ");
            long n = s.nextLong();
            if(Reverse(n) == n)
                System.out.print("Given No. is Palindrome");
            else
                System.out.print("Given No. is not Palindrome");
        }
    }
}