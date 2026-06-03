import java.util.Scanner;
import java.lang.Math;

public class Q9{
    public static void main(String[] args){
        try(Scanner s = new Scanner(System.in)){
            System.out.print("Enter a Number: ");
            int n = s.nextInt();
            int i;
            for(i = 2; i <= Math.sqrt(n); i++)
                if(n % i == 0)
                    break;
            if(i > Math.sqrt(n))
                System.out.println("Given No. is a Prime No.");
            else
                System.out.println("Given No. is not a Prime No.");
        }
    }
}