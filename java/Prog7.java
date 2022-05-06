// write a program and to make calculate by using java program 
import java.util.*;
public class Prog7{
    public static void main(String args[]){
        int add,sub,div,mult;
        int a,b;
        
        System.out.println("enter a number");
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();

        System.out.println("enter b number");
        b = sc.nextInt();

        add = a+b;
        System.out.println("your addition number is "+add);

        sub = a-b;
        System.out.println("your subtraction is "+sub);

        mult = a*b;
        System.out.println("your multiplication is "+mult);

        div = a/b;
        System.out.println("your division is "+div);

        
     


    }
}