// write a program to find the area and circumference of circle

import java.util.*;

public class Prog10{
    public static void main(String args[]){
        float r,area,cir;
        float pi =3.14f;
        
         System.out.println("enter a radius of circle");
         Scanner sc = new Scanner(System.in);
         r = sc.nextInt();

         area = pi*r*r;

         System.out.println("area of circle is "+area);
         
         cir = 2*pi*r;
         System.out.println("circumference of circle is "+cir);


    }
}