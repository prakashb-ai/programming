import java.util.*;
public class Round2{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        double d1;
        System.out.println("enter the value of double::");
        d1 = sc.nextDouble();
        System.out.println("math round value is ::"+Math.round(d1));
        System.out.println("Math ceil value is ::"+Math.ceil(d1));
        System.out.println("math rint value is ::"+Math.rint(d1));
        System.out.println("math floor value is ::"+Math.floor(d1));
    }
}