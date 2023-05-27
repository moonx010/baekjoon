import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int[] a = new int[2];
    int l = 0;
    int[] array = new int[28];
    for(int i = 0; i < 28; i++) {
      array[i] = sc.nextInt();
    }

    for(int i = 1; i <= 30; i++) {
      boolean find = false;
      for(int j = 0; j < 28; j++) {
        if(i == array[j]) {
          find = true;
          break;
        }
      }
      if(!find) {
        a[l] = i;
        l++;
      }
    }
    int max = a[1] > a[0] ? a[1] : a[0];
    int min = a[1] < a[0] ? a[1] : a[0];
    System.out.println(min);
    System.out.println(max);
  }
}