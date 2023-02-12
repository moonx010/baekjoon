import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    String ans = "";
    for (int i = 0; i < t; i++) {
      int a = sc.nextInt();
      int b = sc.nextInt();
      int x = 1;
      for (int j = 0; j < b; j++) {
        x = x * a;
        x = x % 10;
      }
      if (x == 0)
        x = 10;
      ans += x + "\n";
    }
    System.out.println(ans);
    sc.close();
  }
}
