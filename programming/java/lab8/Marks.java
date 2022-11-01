import java.util.*;
class MyException extends Exception{
    MyException(String str){
        super(str);
    }
}

public class Marks{
    public static void main(String args[]){
        int marks;
        Scanner sc = new Scanner(System.in);
        System.out.println("enter your marks::");
        marks = sc.nextInt();
        try{
        if(marks>100){
            throw new MyException("marks out of bounds::");
        }
        System.out.println("obtained marks is::");
    }
    catch(MyException e){
        System.out.println("Excepetion caugt");
        System.out.println(e.getMessage());
    }
    catch(Exception e){
        System.out.println(e);
    }
    }
}