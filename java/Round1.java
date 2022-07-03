import java.util.*;
public class Round1{
    public static void main(String args[]){
        double d1;
        Scanner sc = new Scanner(System.in);

        System.out.println("enter the value::");
        d1 = sc.nextDouble();
        System.out.println("math round is::"+Math.round(d1));
        System.out.println("math ceil is ::"+Math.ceil(d1));
        System.out.println("math rint is ::"+Math.rint(d1));
        System.out.println("math floor is ::"+Math.floor(d1));
    }
}