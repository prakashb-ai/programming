import java.util.*;

public class Words{
    public static void main(String args[]){
        String str;
        System.out.println("enter a line of text :");
        Scanner sc = new Scanner(System.in);
        str = sc.nextLine();
        String Words[ ] = str.split(" ");
        System.out.println("number of words: "+Words.length);
         


    }
}