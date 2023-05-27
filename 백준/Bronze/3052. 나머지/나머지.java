import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int result = 0;
    int[] a = new int[10];
    for(int i = 0; i < 10; i++) {
      int t = sc.nextInt();
      boolean find = false;
      for(int j = 0; j < result; j++) {
        if(a[j] == t % 42) {
          find = true;
          break;
        }
      }
      if(!find) {
        a[result] = t % 42;
        result++;
      }
    }
    System.out.println(result);
}
}