import java.util.*;
import java.math.BigInteger;

public class Big_Calculation {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        for(int i = 0; i < t; i++){
            BigInteger a = scan.nextBigInteger(), b = scan.nextBigInteger();
            System.out.println(a.multiply(b));
        }

    }
}
