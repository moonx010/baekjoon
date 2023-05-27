import java.io.BufferedWriter;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) throws IOException{
    Scanner sc = new Scanner(System.in);
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    int n = sc.nextInt();
    int x = sc.nextInt();
    int[] a = new int[n];
    for(int i = 0; i < n; i++) {
      int t = sc.nextInt();
      if(t < x) bw.write(t + " ");
    }
    bw.flush();
    bw.close();
  }
}