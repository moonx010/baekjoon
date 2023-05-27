import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int ans = 0;
    while (n != 0) {
      if (n % 2 == 1)
        ans++;
      n = n / 2;
    }
    System.out.println(ans);
    sc.close();
  }
}
