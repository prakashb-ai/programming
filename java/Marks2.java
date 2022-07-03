import java.util.*;

class MyException extends Exception{
    MyException(String str){
    super(str);
    }
}
public class Marks2{
    public static void main(String args[]){
        int marks;
        Scanner sc = new Scanner(System.in);
        
        System.out.println("enter a marks::");
        marks = sc.nextInt();
        try{
        if(marks>100){
            throw new MyException("MarksOutOfBounds");
        }
        System.out.println("obtained marks::"+marks);
    }
    catch(MyException e){
        System.out.println("Exception caught");
        System.out.println(e.getMessage());
    }
    catch(Exception e){
        System.out.println(e);
    }
}
}