import java.util.Scanner;

public class Main {
  public static int[][] mem = new int[30][30];

  public static int f(int n, int r) {
    if (mem[n][r] != 0)
      return mem[n][r];
    if (r == 1) {
      mem[n][r] = n;
      return n;
    }

    if (r == 0) {
      mem[n][r] = 1;
      return 1;
    }
    if (n == r) {
      mem[n][r] = 1;
      return 1;
    }
    mem[n][r] = f(n - 1, r - 1) + f(n - 1, r);
    return mem[n][r];
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String ans = "";
    int n = sc.nextInt();
    for (int i = 0; i < n; i++) {
      int x = sc.nextInt();
      int y = sc.nextInt();
      int c = f(y, x);
      ans += c + "\n";
    }
    System.out.println(ans);
    sc.close();
  }
}
