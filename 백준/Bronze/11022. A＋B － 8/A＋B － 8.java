import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] a = new int[n];
    int[] b = new int[n];
    int[] result = new int[n];
    for (int i = 0; i < n; i++) {
      a[i] = sc.nextInt();
      b[i] = sc.nextInt();
      result[i] = a[i] + b[i];
    }

    for(int i = 0; i < n; i++) {
      System.out.println("Case #" + (i + 1) + ": " + a[i] + " + " + b[i] + " = " + result[i]);
    }
  }
}