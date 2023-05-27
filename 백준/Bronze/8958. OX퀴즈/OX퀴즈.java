import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = Integer.parseInt(sc.nextLine());
    int[] result = new int[n];
    for(int i = 0; i < n; i++) {
      String s = sc.nextLine();
      int combo = 1;
      int sum = 0;
      for(int j = 0; j < s.length(); j++) {
        if(s.charAt(j) == 'O') {
          sum += combo;
          combo++;
        }
        else combo = 1;
      }
      result[i] = sum;
    }

    for(int i = 0; i < n; i++) {
      System.out.println(result[i]);
    }
  }
}