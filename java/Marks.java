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
        try{
            System.out.println("enter your marks::");
            marks = sc.nextInt();
            if(marks>100){
                throw new MyException("marks out of bounds exception");
            }
            System.out.println("obtained marks::"+marks);

        }
        catch(MyException e){
            System.out.println("Exception caught::");
            System.out.println(e.getMessage());
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}