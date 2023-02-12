import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    double k = 1.0;
    for (int i = 0; i < n; i++) {
      int x = sc.nextInt();
      k *= Double.valueOf(x);
    }
    Double ans = Math.pow(k, 2.0 / Double.valueOf(n));
    System.out.println(Math.round(ans));
    sc.close();
  }
}
