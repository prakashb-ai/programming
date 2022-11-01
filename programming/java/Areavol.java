//1 area volume;

import java.util.*;
abstract class Shape{
    abstract void calc_area();
    abstract void calc_vol();
}

class Sphere extends Shape{
    double r;
    void set(double rr){
        r=rr;
    }
    void calc_area(){
        System.out.println("area of the sphere is :-"+Math.PI*r*r);
        
    }
    void calc_vol(){
        System.out.println("perimeter of the sphere is :-"+Math.PI*r*r*r/3);
    }
}
class Cone extends Shape{
    double r,h;
    void set(double rr,double he){
        r = rr;
        h = he;
    }
    void calc_area(){
        double sq = h*h+r*r;
        System.out.println("area of cone"+Math.PI*r*(r+Math.sqrt(sq)));
    }
    void calc_vol(){
        System.out.println("volume of cone is:"+1*Math.PI*r*r*h/3);
    }

}
class Cylinder extends Shape{
    double r,h;
    void set(double rr,double he){
        r = rr;
        h = he;
    }
    void calc_area(){
        System.out.println("area of the cyclinder is:-"+2*Math.PI*r*(h+r));
    }
    void calc_vol(){
        System.out.println("volume of the cyclinder is :-"+Math.PI*r*r*h);
    }
}
class Box extends Shape{
      double l,b,h;
      void set(double ll,double bb,double hh){
        l = ll;
        b = bb;
        h = hh;

      }
      void calc_area(){
        System.out.println("area of the rectangle:-"+(l*b*h));
      }
      void calc_vol(){
        System.out.println("volume of the rectangle:-"+(2*l*b+b*h+h*l));
      }
}
class Areavol{
      public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        double l,b,r,h;
        Sphere s = new Sphere();
        Cone c = new Cone();
        Cylinder cc = new Cylinder();
        Box bb = new Box();

        //for sphere
        
        System.out.println("enter the radius of sphere:");
        r = sc.nextDouble();
        s.set(r);
        s.calc_area();
        s.calc_vol();
       
       //for cone;
       System.out.println("enter the radius of the cone:-");
       r = sc.nextDouble();

       System.out.println("enter the height of the cone:-");
       h = sc.nextDouble();
       c.set(r,h);
       c.calc_area();
       c.calc_vol();

       //for cyclinder;

       System.out.println("enter the radius of the cyclinder:-");
       r= sc.nextDouble();

       System.out.println("enter the height of the cylinder:-");
       h = sc.nextDouble();

      cc.set(r,h);
      cc.calc_area();
      cc.calc_vol();

      //for box 
      System.out.println("enter the length of the box:-");
      l = sc.nextDouble();
      System.out.println("enter the breadth of the box:-");
      b = sc.nextDouble();
      
      System.out.println("enter the height of the box:-");
      h = sc.nextDouble();

      bb.set(l,b,h);
      bb.calc_area();
      bb.calc_vol();


      }
}