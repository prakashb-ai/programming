import java.util.*;

public class Employee{
    public static void main(String args[]){
        int salary,emp_no;
        char g;
        String name;
       
       System.out.println("enter the employee registration number:-");
       Scanner sc = new Scanner(System.in);
       emp_no = sc.nextInt();
        
        name = sc.nextLine();
       System.out.println("enter the name of the employee:-");
        name = sc.nextLine();

     g = sc.nextLine().charAt(0);
       System.out.println("enter the gender:-");
       g = sc.nextLine().charAt(0);

       System.out.println("enter the salary of the employee:-");
       salary = sc.nextInt();


       System.out.println(".........details...........");
       System.out.println(" employee is :-"+emp_no);
       System.out.println(" name is :-"+name);
       System.out.println("gender  is :-"+g);

        System.out.println("salary :-"+salary);



    }
}