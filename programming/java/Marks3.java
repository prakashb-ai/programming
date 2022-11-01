import java.util.*;
class MyException extends Exception{
    MyException(String str){
        super(str);
    }
}

public class Marks3{
    public static void main(String args[]){
        int marks;
        Scanner sc = new Scanner(System.in);

        System.out.println("enter the marks ::");
        marks = sc.nextInt();

      try{
          if(marks>100){
            throw new MyException("Marks Out of Bound");
          }
          else {
             System.out.println("obtained marks::"+marks);
          }
      }
      catch(MyException e){
        System.out.println("caught Exeption::");
        System.out.println(e.getMessage());
      }
      catch(Exception e){
        System.out.println(e);
      }
    }
}