import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {
  public static void main(String[] args) throws IOException {
    BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    StringTokenizer st;
    int n = Integer.parseInt(bf.readLine());
    for(int i = 0; i < n; i ++) {
      st = new StringTokenizer(bf.readLine());
      int a =  Integer.parseInt(st.nextToken());
      int b =  Integer.parseInt(st.nextToken());
      bw.write( Integer.toString(a + b) + "\n");
    }
    bw.flush();
    bw.close();
  }
}