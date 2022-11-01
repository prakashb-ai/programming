import java.util.*;
class MyException extends Exception{
    MyException(String str){
        super(str);
    }
}

public class Marks4{
    public static void main(String args[]){
        int marks;
        Scanner sc = new Scanner(System.in);
        try{
            System.out.println("enter the marks::");
            marks = sc.nextInt();

            if(marks>100){
                throw new Exception("marks out of bound exception");
            }
            else{
                System.out.println("obtain marks::"+marks);
            }
            
        }catch(MyException e){
            System.out.println("caught error");
            System.out.println(e.getMessage());
        }catch(Exception e){
            System.out.println(e);

        }
    }
}