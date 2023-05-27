import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    double x1 = Double.valueOf(sc.nextInt());
    double y1 = Double.valueOf(sc.nextInt());
    double x2 = Double.valueOf(sc.nextInt());
    double y2 = Double.valueOf(sc.nextInt());
    double x3 = Double.valueOf(sc.nextInt());
    double y3 = Double.valueOf(sc.nextInt());

    double m = (x1 - x2) * (y2 - y3);
    double n = (x2 - x3) * (y1 - y2);

    if (m == n) {
      double ans = -1.0;
      System.out.println(ans);
      sc.close();
      return;
    }

    double a = Math.sqrt(Math.pow(x1 - x2, 2) + Math.pow(y1 - y2, 2));
    double b = Math.sqrt(Math.pow(x2 - x3, 2) + Math.pow(y2 - y3, 2));
    double c = Math.sqrt(Math.pow(x3 - x1, 2) + Math.pow(y3 - y1, 2));

    double min = Math.min(a, Math.min(b, c));
    double max = Math.max(a, Math.max(b, c));

    double ans = 2 * (max - min);

    System.out.println(ans);
    sc.close();
  }
}
