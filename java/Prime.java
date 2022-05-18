//10. write a program to read a number from  the user, and check whether the number is prime or not

import java.util.*;

public class Prime{
      
       public static void main(String args[]){
           int n;
           System.out.println("enter a number:-");
           Scanner sc = new Scanner(System.in);
           n = sc.nextInt();

         if(n/2!=0){
             System.out.println("it is  a prime number");
         }
         else {
             System.out.println("it's not a prime number");
         }

       }

}

//output :-
//enter a number :-
//5
//it is not a prime number