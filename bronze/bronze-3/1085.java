import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int x = sc.nextInt();
    int y = sc.nextInt();
    int w = sc.nextInt();
    int h = sc.nextInt();

    int ans = x;
    if (y < ans)
      ans = y;
    if (w - x < ans)
      ans = w - x;
    if (h - y < ans)
      ans = h - y;
    System.out.println(ans);
    sc.close();
  }
}