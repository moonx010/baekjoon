import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int a = sc.nextInt();
    int b = sc.nextInt();
    int c = sc.nextInt();
    int d = c / 60;
    c = c % 60;
    int h = (a + d + ((b + c) / 60)) % 24;
    int m = (b + c) % 60;
    System.out.println(h + " " + m);
  }
}