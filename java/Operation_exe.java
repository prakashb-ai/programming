//it is in exception concept 
import java.util.*;
class Operation_exe{
    public static void main(String[] args){
        if(args.length==0){
            System.out.println("no argument are passed::");
        }
        else {
           int a =Integer.parseInt(args[0]);
			String p=args[1];
			int b=Integer.parseInt(args[2]);
			switch(p)
		{
			case "+":System.out.println("Addition of "+a+" "+"and "+b+" "+"is : "+(a+b));
				   break;
			case "-":System.out.println("Substraction of "+a+" "+"and "+b+" "+"is : "+(a-b));
					break;
			case "/":System.out.println("Division of "+a+" "+"and "+b+" "+"is : "+(a/b));
					break;
			default:System.out.println("Enter a valid operator ");
		 }
		}
	}
    
}