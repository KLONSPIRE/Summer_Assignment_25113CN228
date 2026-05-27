import java.util.Scanner;

public class Q4{
    public static int count(long n){
        int c = 0;
        if(n == 0)
            return 1;
        n = Math.abs(n);
        while(n > 0){
            n /= 10;
            c++;
        }
        return c;
    }

    public static void main(String[] args){
        try(Scanner s = new Scanner(System.in)){
            System.out.print("Enter a Number : ");
            long n = s.nextLong();
            System.out.println("No. of Digits = " + count(n));
        }
    }
}