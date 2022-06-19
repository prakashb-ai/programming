import java.util.*;

public class Words1{
    public static void main(String args[]){
        String str;

        Scanner sc = new Scanner(System.in);

        System.out.println("enter a line of text::");
        str = sc.nextLine();

        String word[ ]= str.split(" ");
        System.out.println("words length is ::"+word.length);
    }
}