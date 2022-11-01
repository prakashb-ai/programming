
import java.util.*;
class NumberFormatException extends Exception{
public NumberFormatException(String str){
System.out.println("Result cannot be calculated \""+str+"\".");
}
}
class Student_exe
{ public static void main(String a[])
{ int roll,n, i; String name; double totalMarks = 0, percentage, avg; 
Scanner sc=new Scanner(System.in);
try
{   System.out.print("Enter the Name :: "); name=sc.next();
    System.out.print("Enter the Roll :: "); roll=sc.nextInt();

System.out.print("Enter Number of Subject: ");
        n = sc.nextInt();
        System.out.println("Enter Marks of " + n + " Subjects");
        for (i = 0; i < n; i++) {
            totalMarks += sc.nextDouble();
        }
        avg = totalMarks/n;
        percentage = (totalMarks /(n*100)) * 100;
        
if(totalMarks<0 || totalMarks> n*100)
throw new NumberFormatException("Marks not within the range.");
System.out.println("\n Name : " + name);
System.out.println("Roll No : " + roll);
System.out.println("Total MArks : " + totalMarks);
System.out.println("percentage :  " + percentage);
System.out.print("The student Grade is: ");
if(avg>=90)
        {
            System.out.print("O");
        }
        else if(avg>=80 && avg<90)
        {
           System.out.print("E");
        } 
        else if(avg>=70 && avg<80)
        {
            System.out.print("A");
        }
        else if(avg>=60 && avg<70)
        {
            System.out.print("B");
        }
        else if(avg>=50 && avg<60)
        {
            System.out.print("C");
        }
        else if(avg>=40 && avg<50)
        {
            System.out.print("D");
        }
        else
        {
            System.out.print("F");
        }
}
catch(NumberFormatException e)
{ System.out.print("Caught :: "); System.out.println(e);
}
catch(Exception e){ System.out.println(e); }
}
}

