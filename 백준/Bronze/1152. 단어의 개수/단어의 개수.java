import java.io.IOException;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) throws IOException {
    Scanner sc = new Scanner(System.in);
    String s = sc.nextLine();
    String[] a = s.split(" ");

    int ans = 0;

    for (int i = 0; i < a.length; i++) {
      if (a[i].length() > 0)
        ans++;
    }

    System.out.println(ans);
  }
}