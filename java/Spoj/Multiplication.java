package Spoj;
import java.util.*;
import java.math.BigInteger;
public class Multiplication {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        BigInteger a, b;
        for(int i = 0; i < t; i++){
             a = scan.nextBigInteger();
             b = scan.nextBigInteger();
            System.out.println(a.multiply(b));
        }
    }
}
