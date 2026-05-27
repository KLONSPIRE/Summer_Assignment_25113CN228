import java.util.Scanner;
import java.math.BigInteger;

public class Q3{
    public static BigInteger fact(int n){
        BigInteger f = BigInteger.ONE;
        while(n > 1){
            f = f.multiply(BigInteger.valueOf(n));
            n -= 1;
        }
        return f;
    }

    public static void main(String[] args){
        try(Scanner s = new Scanner(System.in)){
            System.out.print("Enter a number : ");
            int n = s.nextInt();
            System.out.println("Factorial = " + fact(n));
        }
    }
}