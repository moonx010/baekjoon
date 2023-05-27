import java.util.Scanner;

public class Main {
  public static int f(int n) {
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
      if(chk(i)) cnt++;
    }
    return cnt;
  }

  public static boolean chk(int n) {
    int[] a;
    if(n < 10) a = new int[1];
    else if(10 <= n && n < 100) a = new int[2];
    else if(100 <= n && n < 1000) a = new int[3];
    else a = new int[4];
    for(int i = 0; i < a.length; i++) {
      a[i] = n / (int) Math.pow(10, a.length - i - 1);
      n = n % (int) Math.pow(10, a.length - i - 1);
    }
    if(a.length < 3) return true;
    int d = a[1] - a[0];
    for(int i = 0; i < a.length - 1; i++) {
      if(a[i + 1] - a[i] != d) return false;
    }
    return true;
  }
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    System.out.println(f(n));
  }
}