
import java.util.Scanner;
public class Uppercase {
   public static void main(String[] args) {
      Scanner s = new Scanner(System.in);
      System.out.print("enter a sentence: ");
      String s1 = "";
      String str = s.nextLine();
      Scanner lineScan = new Scanner(str);
      while(lineScan.hasNext()) {
         String word = lineScan.next();
         s1 += Character.toUpperCase(word.charAt(0)) + word.substring(1) + " ";
      }
      System.out.println(s1);
   }
}
