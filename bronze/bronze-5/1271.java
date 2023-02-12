import java.math.BigInteger;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    BigInteger n = sc.nextBigInteger();
    BigInteger m = sc.nextBigInteger();

    BigInteger x = n.divide(m);
    BigInteger y = n.remainder(m);

    System.out.println(x);
    System.out.println(y);
    sc.close();
  }
}