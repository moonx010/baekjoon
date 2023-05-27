import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] result = new int[n];
    for (int i = 0; i < n; i++) {
      int a = sc.nextInt();
      int b = sc.nextInt();
      result[i] = a + b;
    }

    for(int i = 0; i < n; i++) {
      System.out.println("Case #" + (i + 1) + ": " + result[i]);
    }
  }
}