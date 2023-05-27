public class Main {
  public static int d(int n) {
    int result = n;
    while(n != 0) {
      result += n % 10;
      n = n / 10;
    }
    return result;
  }
  public static void main(String[] args) {
    boolean[] chk = new boolean[10001];
    for(int i = 1; i <= 10000; i++) {
      int n = d(i);
      if(n < 10001) chk[n] = true;
    }

    for(int i = 1; i <= 10000; i++) {
      if(!chk[i]) System.out.println(i);
    }
  }
}