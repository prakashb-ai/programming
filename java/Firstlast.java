import java.util.*;

public class Firstlast{
    public static void main(String args[]){
        String first,last;
        Scanner sc = new Scanner(System.in);

        System.out.println("enter a first characher");
        first = sc.nextLine();
        char fch = first.charAt(0);

        System.out.println("enter a last character");
        last = sc.nextLine();
        char lch= last.charAt(first.length()-1);

        System.out.println("first character is ::"+fch+"last character::"+lch);
    }
}

