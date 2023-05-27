import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String s = sc.nextLine();
    String ans = "";
    for (char i = 'a'; i <= 'z'; i++) {
      int t = -1;
      for (int j = 0; j < s.length(); j++) {
        if (s.charAt(j) == i) {
          t = j;
          break;
        }
      }
      ans += Integer.toString(t) + " ";
    }

    System.out.println(ans);
  }
}