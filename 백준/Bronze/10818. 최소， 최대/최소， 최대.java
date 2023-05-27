import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int min = 1000000;
    int max = -1000000;
    for(int i = 0; i < n; i++) {
      int t = sc.nextInt();
      if(t > max) max = t;
      if(t < min) min = t;
    }
    System.out.println(min + " " + max);
  }
}