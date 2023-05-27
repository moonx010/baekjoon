import java.io.IOException;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) throws IOException {
    Scanner sc = new Scanner(System.in);
    String s = sc.nextLine();
    char[][] a = {{'A', 'B', 'C'}, {'D', 'E', 'F'}, {'G', 'H', 'I'}, {'J', 'K', 'L'}, {'M', 'N', 'O'}, {'P', 'Q', 'R', 'S'}, {'T', 'U', 'V'}, {'W', 'X', 'Y', 'Z'}};
    int ans = 0;

    for(int i = 0; i < s.length(); i++) {
      char t = s.charAt(i);
      for(int p = 0; p < a.length; p++) {
        for(int q = 0; q < a[p].length; q++) {
          if(t == a[p][q]) {
            ans += 3 + p;
          }
        }
      }
    }
    

    System.out.println(ans);
  }
}