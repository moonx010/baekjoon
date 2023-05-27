import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String n = sc.nextLine();
    int k = Integer.parseInt(n);
    String s = sc.nextLine();
    int ans = 0;

    for (int i = 0; i < k; i++) {
      ans += s.charAt(i) - '0';
    }

    System.out.println(ans);
  }
}