

import java.util.*;

public class Prog12{
    public static void main(String args[]){
        int r,c;

        System.out.println("enter a rows of patter");
        Scanner sc = new Scanner(System.in);
        r = sc.nextInt();
        System.out.println("enter a colums of patter");
        c = sc.nextInt();

        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
                System.out.print(" * ");
            }
            System.out.println();
        }


    }
}