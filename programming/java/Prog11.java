

import java.util.*;
public class Prog11{
    public static void main(String args[]){
        int rows;
        System.out.println("enter  a how many rows you want");
        Scanner sc = new Scanner(System.in);
        rows  = sc.nextInt();

        for(int i=1;i<=rows;i++){
            for(int j=1;j<=i;j++){
                System.out.print(" *");

            }
            System.out.println();
        }
    }
}