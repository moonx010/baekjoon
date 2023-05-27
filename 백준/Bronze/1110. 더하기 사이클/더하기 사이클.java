import java.io.BufferedWriter;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.util.Scanner;

public class Main {
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int result = 0;
    int x = sc.nextInt();
    int a = x;
    do {
      a = ((a % 10) * 10) + (((a / 10) + (a % 10)) % 10);
      result++;
    } while(x != a);
    System.out.println(result);
  }
}