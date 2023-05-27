import java.io.BufferedWriter;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) throws IOException {
    Scanner sc = new Scanner(System.in);
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    int n = sc.nextInt();

    for(int i = 0; i < n; i++) {
      int k = sc.nextInt();
      int[] a = new int[k];
      int sum = 0;
      for(int j = 0; j < k; j++) {
        a[j] = sc.nextInt();
        sum += a[j];
      }
      int cnt = 0;
      double avg = (double) sum / (double) k;
      for(int j = 0; j < k; j++) {
        if(a[j] > avg) cnt++;
      }
      double p = (((double) cnt / (double) k) * 100.0);
      bw.write(String.format("%.3f", p) + "%\n");
    }

    bw.flush();
    bw.close();
  }
}