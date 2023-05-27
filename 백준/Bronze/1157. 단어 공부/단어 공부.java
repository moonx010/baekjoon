import java.io.IOException;
import java.util.HashMap;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) throws IOException {
    Scanner sc = new Scanner(System.in);
    String s = sc.nextLine();
    String str = s.toUpperCase();
    HashMap<Character, Integer> map = new HashMap<Character, Integer>();
    for (int i = 0; i < str.length(); i++) {
      if (map.containsKey(str.charAt(i)))
        map.put(str.charAt(i), map.get(str.charAt(i)) + 1);
      else
        map.put(str.charAt(i), 1);
    }

    int max = 0;

    for (char key : map.keySet()) {
      if (max < map.get(key))
        max = map.get(key);
    }

    int count = 0;
    char p = 'a';
    for (char key : map.keySet()) {
      if (max == map.get(key)) {
        p = key;
        count++;
      }
    }
    if (count > 1)
      System.out.println("?");
    else
      System.out.println(p);
  }
}