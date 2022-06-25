import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

abstract class Staff{
    String name,address;
}

class FullTimeStaff extends Staff{
    String department;
    double salary;
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public void accept()  throws IOException{
        System.out.println("enter the name:");
        name = br.readLine();

        System.out.println("enter the address:-");
         address = br.readLine();

         System.out.println("enter the department::");
         department = br.readLine();

         System.out.println("enter the salary::");
         salary = Double.parseDouble(br.readLine());
    }
    public void display(){
        System.out.println("name is::"+name);
        System.out.println("address iss::"+address);
        System.out.println("department is::"+department);
        System.out.println("salary is ::"+salary);
        System.out.println("..................");
    }

}

class Partime extends Staff{
    int hour,rate;
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public void accept() throws IOException{
        System.out.println("enter the name::");
        name = br.readLine();

        System.out.println("enter the address::");
        address = br.readLine();

        System.out.println("enter the hours::");
        hour = Integer.parseInt(br.readLine());

        System.out.println("enter the rate::");
        rate = Integer.parseInt(br.readLine());
    }
    public void display(){
     System.out.println("name is::"+name);
     System.out.println("address is::"+address);
     System.out.println("hour is ::"+hour);
     System.out.println("rate is ::"+rate);
     System.out.println(".....................");

    }

}

public class Staff1{
    public static void main(String args[]) throws IOException{
        int i;
        System.out.println("select any one::");
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("1.full time");
        System.out.println("2.part time");
        System.out.println("3.enter the choice");

        int ch = Integer.parseInt(br.readLine());

        switch(ch){
            case 1:
               System.out.println("enter a full time::");
                int n = Integer.parseInt(br.readLine());
                FullTimeStaff [] l = new FullTimeStaff[n];
                for( i=0;i<n;i++){
                        l[i] = new FullTimeStaff();
                        l[i].accept();            
            }
            for( i=0;i<n;i++){
                l[i].display();
            }
            break;
            case 2:
            System.out.println("enter the parttime::");
              int m = Integer.parseInt(br.readLine());
              Partime [] p = new Partime[m];
              for( i=0;i<m;i++){
                p[i] = new Partime();
                p[i].accept();
              }
              for( i=0;i<m;i++){
                p[i].display();
              }
              break;
        }
        


    }
}