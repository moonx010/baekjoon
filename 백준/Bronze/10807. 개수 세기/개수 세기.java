import java.util.Scanner;

public class Main {
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int result = 0;
    int n = sc.nextInt();
    int[] a = new int[n];
    for(int i = 0; i < n; i++) {
      a[i] = sc.nextInt();
    }
    int v = sc.nextInt();
    for(int i = 0; i < n; i++) {
      if(a[i] == v) result++;
    }
    System.out.println(result);
  }
}