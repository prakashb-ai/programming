import java.util.*;
public class Round{
    public static void main(String args[]){
        double d1;
        Scanner sc = new Scanner(System.in);
        System.out.println("enter a number::");
        d1 = sc.nextDouble();
        System.out.println("\n celling value:"+Math.ceil(d1));
        System.out.println("\n round value::"+Math.round(d1));
        System.out.println("\n floor value::"+Math.floor(d1));
    }
}