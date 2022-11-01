import java.util.*;
 abstract class Shape{
    abstract void cal_area();
    abstract void cal_vol();
}
class Sphere extends Shape{
    double r;
    void set(double rr){
        r = rr;
    }
    void cal_area(){
        System.out.println("area of the shpere:-"+Math.PI*r*r);
    }
    void cal_vol(){
        System.out.println("perimeter of the sphere:-"+Math.PI*r*r*r/3);
    }
}
class Cone extends Shape{
    double h,r;
    void set(double rr,double hh){
        r = rr;
        h = hh;
    }
    void cal_area(){
        double sq = h*h+r*r;
        System.out.println("enter the radius of the cone:-"+Math.PI*r*(r+Math.sqrt(sq)));

    }
    void cal_vol(){
        System.out.println("enter the volume of the cone:-"+Math.PI*r*r*r*h/3);
    }
}

class Cyclinder extends Shape{
    double h,r;
    void set(double rr,double hh){
        r = rr;
        h = hh;
        
    }
    void cal_area(){
        System.out.println("enter the radius of the cyclinder:-"+Math.PI*r*(h+r));

    }
    void cal_vol(){
        System.out.println("enter the height of cyclinder:-"+Math.PI*r*r*h);
    }
}

class Box extends Shape{
    double l,b,h;
    void set(double ll,double bb,double hh){
        l = ll;
        b = bb;
        h = hh;
    }
    void cal_area(){
        System.out.println("enter the area of the box:-"+(l*b*h));
    }
    void cal_vol(){
        System.out.println("enter the volume of the box:-"+(2*l*b+b*h+h*l));
    }
}
class Areavol1{
    public static void main(String args[]){
        double l,b,h,r;
        Scanner sc = new Scanner(System.in);
        Sphere s = new Sphere();
        Cone c = new Cone();
        Cyclinder cc = new Cyclinder();
        Box bb = new Box();
         
        System.out.println("enter the radius of sphere:");
        r = sc.nextDouble();
        s.set(r);
        s.cal_area();
        s.cal_vol();
       
       //for cone;
       System.out.println("enter the radius of the cone:-");
       r = sc.nextDouble();

       System.out.println("enter the height of the cone:-");
       h = sc.nextDouble();
       c.set(r,h);
       c.cal_area();
       c.cal_vol();

       //for cyclinder;

       System.out.println("enter the radius of the cyclinder:-");
       r= sc.nextDouble();

       System.out.println("enter the height of the cylinder:-");
       h = sc.nextDouble();

      cc.set(r,h);
      cc.cal_area();
      cc.cal_vol();

      //for box 
      System.out.println("enter the length of the box:-");
      l = sc.nextDouble();
      System.out.println("enter the breadth of the box:-");
      b = sc.nextDouble();
      
      System.out.println("enter the height of the box:-");
      h = sc.nextDouble();

      bb.set(l,b,h);
      bb.cal_area();
      bb.cal_vol();



    }
}