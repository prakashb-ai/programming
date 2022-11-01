import java.util.*;
public class Operation_exe2{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        if(args.length == 0){
            System.out.println("no arugement is passed:");
        }
        else{
            int a = Integer.parseInt(args[0]);
            String p = args[1];
            int b = Integer.parseInt(args[2]);
            switch(p){
                case "+": 
                  System.out.println("addition of"+a+" "+"and"+b+" "+"is"+(a+b));
                  break;
            }
        }
    }
}