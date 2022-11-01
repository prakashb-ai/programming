abstract class Circle{
    double radius;
    abstract double area();
    public void perimeter(){
        System.out.println("perimeter of the circle:-"+(2*Math.PI*radius));
    }
}
class Sphere extends Circle{
    public double area(){
        return 4*Math.PI*radius*radius;
    }
       Sphere(double d){
        super.radius=d;
       }
       public static void main(String args[]){
            Sphere s = new Sphere(5);
            System.out.println("surface area::"+s.area());
       }
    

}