import java.util.*;


public class Prog1{
    public static void main(String args[]){
        int m1,m2,m3,m4,m5;
        int sum,avg;
        System.out.println("enter a m1 marks");
        Scanner sc = new Scanner(System.in);
        m1 = sc.nextInt();

        System.out.println("enter a m2 marks");
        m2 = sc.nextInt();

        System.out.println("enter a m3 marks");
        m3 = sc.nextInt();

        System.out.println("enter a m4 marks");
        m4 = sc.nextInt();

        System.out.println("enter a m5 marks");
        m5 = sc.nextInt();

        sum = m1+m2+m3+m4+m5;

        System.out.println("the total number of 5 subjects is "+sum);


        avg = sum/5;

        System.out.println("the average number of 5 subjects marks is "+avg);
    }
}