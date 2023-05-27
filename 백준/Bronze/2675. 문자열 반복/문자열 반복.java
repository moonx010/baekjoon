import java.io.BufferedWriter;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) throws IOException {
    Scanner sc = new Scanner(System.in);
    String n = sc.nextLine();
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    int num = Integer.parseInt(n);
    for (int i = 0; i < num; i++) {
      String t = sc.nextLine();
      String[] a = t.split(" ");
      int k = Integer.parseInt(a[0]);
      String x = "";
      for (int p = 0; p < a[1].length(); p++) {
        for (int j = 0; j < k; j++) {
          x += a[1].charAt(p);
        }
      }
      bw.write(x + "\n");
    }

    bw.flush();
    bw.close();
  }
}