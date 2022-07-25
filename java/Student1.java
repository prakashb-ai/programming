
import java.util.*;
class Student1{
    private String name,city;
    private int age;
    public void getDataa(String x,String y,int t){
        name = x;
        city = y;
        age = t;
    }
    public void printData(){
        Scanner sc = new Scanner(System.in);
          System.out.println("enter the   student name");
       name = sc.nextLine();

        System.out.println("student name ="+name);
       System.out.println("enter the   student city");
    city = sc.nextLine();

        System.out.println("student city="+city);
        System.out.println("enter the age of the student");
        age = sc.nextInt();
        System.out.println("student age="+age);
    }
    public static void main(String args[]){
        Student1 s1 = new Student1();
        Student1 s2 = new Student1();

        s1.getDataa("surya","banglore",321);
        s1.printData();
      s2.getDataa("prakash","usa",321);

        s2.printData();
    }
}