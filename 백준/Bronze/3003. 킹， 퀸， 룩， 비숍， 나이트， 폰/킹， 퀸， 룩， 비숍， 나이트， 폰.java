import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int[] wanted = { 1, 1, 2, 2, 2, 8 };
    for (int i = 0; i < 6; i++) {
      int t = sc.nextInt();
      System.out.print((wanted[i] - t) + " ");
    }
  }
}