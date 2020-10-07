package Spoj;
import java.util.*;
import java.math.BigInteger;

public class JULKA {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        BigInteger apples, b, c;
        for(int i = 0; i < 10; i++){
            apples = scan.nextBigInteger();
            b = scan.nextBigInteger();
            c = (apples.add(b)).divide(BigInteger.valueOf(2));
            System.out.println(c);
            System.out.println(c.subtract(b));
        }
    }
}
