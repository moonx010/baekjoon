import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    char[] vowels = { 'a', 'e', 'i', 'o', 'u' };
    String s = sc.nextLine();
    String ans = "";
    while (!s.equals("#")) {
      int cnt = 0;
      s = s.toLowerCase();
      char[] array = s.toCharArray();
      for (int i = 0; i < array.length; i++) {
        char x = array[i];
        for (int j = 0; j < vowels.length; j++) {
          if (x == vowels[j])
            cnt++;
        }
      }
      ans += cnt + "\n";
      s = sc.nextLine();
    }
    System.out.println(ans);
    sc.close();
  }
}