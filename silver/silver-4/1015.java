import java.util.Arrays;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] array1 = new int[n];
    int[] array2 = new int[n];
    for (int i = 0; i < n; i++) {
      int x = sc.nextInt();
      array1[i] = x;
      array2[i] = x;
    }
    Arrays.sort(array1);
    boolean[] chk = new boolean[n];
    for (int i = 0; i < n; i++) {
      chk[i] = false;
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (array2[i] == array1[j] && !chk[j]) {
          chk[j] = true;
          System.out.print(j + " ");
          break;
        }
      }
    }
    sc.close();
  }
}
