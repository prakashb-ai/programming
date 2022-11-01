//write a program to find the area of rectangle using java program

import java.util.*;

 public class Prog8{
     public static void main(String args[]){
         int l,b,area;

         System.out.println("enter a length number");
         Scanner sc = new Scanner(System.in);
         l = sc.nextInt();

         System.out.println("enter a bredth number");
         b = sc.nextInt();

         area  = l*b;

         System.out.println("the area of rectangle is "+area);

     }
 }