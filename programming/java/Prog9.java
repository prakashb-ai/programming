// write a program to do the swap two number using java program

import java.util.*;

public class Prog9{
    public static void main(String args[]){
        int f,l,t;
        System.out.println("enter a first number");
        Scanner sc = new Scanner(System.in);
        f = sc.nextInt();

        System.out.println("enter a second number");
        l = sc.nextInt();
        
        t = f;
        f = l ;
        l = t;
        System.out.println("swap first number"+ f);
        System.out.println("swap second number"+l);

    }
}