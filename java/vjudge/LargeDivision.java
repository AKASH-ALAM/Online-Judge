package java.vjudge;
import java.util.*;
import java.math.BigInteger;

public class LargeDivision {
	@SuppressWarnings("resource")
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		BigInteger a, b;
		for(int i = 1; i <= t; i++) {
			System.out.print("Case "+i+": ");
			a = scan.nextBigInteger();
			b = scan.nextBigInteger();
			int d;
			d = b.signum();
			if(d == -1) b = b.multiply(BigInteger.valueOf(-1));
			a = a.mod(b);
			if(a.equals(BigInteger.valueOf(0)))  {
				System.out.println("divisible");
			}
			else System.out.println("not divisible");
		}
	}
}
