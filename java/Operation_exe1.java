import java.util.*;
class Operation_exe1{
    public static void main(String[] args){
        if(args.length==0){
            System.out.println("no argument is passed:");
        }
        else {
            int a = Integer.parseInt(args[0]);
            String p = args[1];
            int b = Integer.parseInt(args[2]);
            switch(p){
                case "+":
                System.out.println("addition of "+a+" "+" and "+b+" "+"is::"+(a+b));
                break;

                case "-":
              System.out.println("subraction of "+a+" "+" and "+b+" "+"is::"+(a-b));
              break;
              case "/":
              System.out.println("division of "+a+" "+" and "+b+" "+"is::"+(a/b));
              break;

              case "*":
             System.out.println("multiplication of "+a+" "+" and "+b+" "+"is::"+(a*b));
             break;
             default:
             System.out.println("invalid choice");



            }
        }
    }
}