import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    Double[] a = new Double[n];
    Double max = Double.valueOf(0.0);
    Double sum = Double.valueOf(0.0);
    for(int i = 0; i < n; i++) {
      a[i] = Double.valueOf(sc.nextInt());
      if(max < a[i]) max = a[i];
    }
    for(int i = 0; i < n; i++) {
      sum += ((a[i] / max) * 100.0);
    }
    System.out.println(sum / n);
  }
}