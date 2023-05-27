import java.io.BufferedWriter;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) throws IOException {
    Scanner sc = new Scanner(System.in);
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    while(true) {
      int a = sc.nextInt();
      int b = sc.nextInt();
      if(a == 0 && b == 0) break;
      bw.write(Integer.toString(a + b) + "\n");
    }
    bw.flush();
    bw.close();
  }
}