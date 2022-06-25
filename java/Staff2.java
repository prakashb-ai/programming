import java.io.IOException;
import java.io.InputStreamReader;
import java.io.BufferedReader;

abstract class Staff{
    String name,address;
}

class FullTimeStaff extends Staff{
    String department;
    double salary;
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    public void accept() throws IOException{
          System.out.println("enter the name ::");
          name = br.readLine();

          System.out.println("enter the address::");
          address = br.readLine();
          
          System.out.println("enter the department::");
          department = br.readLine();

          System.out.println("enter the salary::");
          salary = Double.parseDouble(br.readLine());
    }
    public void display(){
        System.out.println("name is::"+name);
        System.out.println("address is::"+address);
        System.out.println("department is::"+department);
        System.out.println("salary is::"+salary);
        System.out.println("...........................");
    }
}
class PartTime extends Staff{
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
        System.out.println("..........................");
      }
      public void display(){
        System.out.println("name::"+name);
        System.out.println("address::"+address);
        System.out.println("hour::"+hour);
        System.out.println("rate::"+rate);
      }
}

class Staff2{
      public static void main(String args[])throws IOException{
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
          int i;
          System.out.println("select any one");
          System.out.println("1.full time");
          System.out.println("2.part time");
          System.out.println("enter the choice");
          int ch = Integer.parseInt(br.readLine());

          switch(ch){
            case 1:  
                System.out.println("enter  the time of  full time");
                int n = Integer.parseInt(br.readLine());
                FullTimeStaff[] f = new FullTimeStaff[n];
                for(i=0;i<n;i++){
                    f[i]= new FullTimeStaff();
                    f[i].accept();
                }
                for(i=0;i<n;i++){
                    f[i].display();
                }
                break;
                case 2:
                    System.out.println("enter the times of part time::");
                    int m = Integer.parseInt(br.readLine());
                    PartTime[] p = new PartTime[m];
                    for(i=0;i<m;i++){
                       p[i] = new PartTime();
                       p[i].accept();
                    }
                    for(i=0;i<m;i++){
                        p[i].display();
                    }
                    break;
          }
      }
  
  
  
  
  
  
  
  
    }