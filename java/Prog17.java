import java.util.*;
class Prog17{
    private double r;

    void setValues(int x){
        r = x;
    }
    double  area(){
       double area;
        return  area = Math.PI*r*r;
    }
    double per(){
        double per;
        return per =2*Math.PI*r;
    }
    void printData(){
       System.out.println( "area"+area());
        System.out.println("perimeter"+per());
    }

    public static void main(String args[]){

        Prog17 c = new Prog17();

        System.out.println("enter the radius of circle");
        Scanner sc = new Scanner(System.in);
       // Prog17.r = sc.nextDouble();
        c.setValues(10);
        c.printData();
    }
}