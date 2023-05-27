import java.io.IOException;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) throws IOException {
    Scanner sc = new Scanner(System.in);
    String s = sc.nextLine();
    String[] a = s.split(" ");

    int n = 0;
    for (int i = a[0].length() - 1; i >= 0; i--) {
      n *= 10;
      n += a[0].charAt(i) - '0';
    }
    int m = 0;
    for (int i = a[1].length() - 1; i >= 0; i--) {
      m *= 10;
      m += a[1].charAt(i) - '0';
    }

    int ans = n > m ? n : m;

    System.out.println(ans);
  }
}