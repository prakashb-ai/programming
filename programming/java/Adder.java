
import java.util.*;
public class Adder{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int sum=0 ;
       // System.out.println("enter a number");
        //sum = sc.nextInt();
        for(int i=0;i<args.length;i++)
        sum+= Integer.parseInt(args[i]);
        System.out.println("\n sum is"+sum);
    }
}