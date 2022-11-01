
import java.util.*;

public class Prog2{
    public static void main(String args[]){
        int c;
        double far;

        System.out.println("enter a centigrade of temperature ");
        Scanner sc = new Scanner(System.in);
        c = sc.nextInt();

        far = 9*c/5+32;

        System.out.println("farhenit temperature is"+far);
    }
}