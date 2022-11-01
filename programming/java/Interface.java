interface Area{
    final static float pi = 3.14F;
    float compute(float x,float y);
}
class Rectangle implements Area {
    public float compute(float x,float y){
        return (pi*x*y);
    }
}
    class  Circle implements Area{
     public float compute(float x,float y){
        return (pi*x*y);
     }
    }
    class Interface{
        public static void main(String args[]){
            Rectangle rect = new Rectangle();
            Circle cir = new Circle();
            Area a;
            a = rect;
            System.out.println("area of rectangle= "+a.compute(10,20));
            a = cir;
            System.out.println("area of circle= "+a.compute(30,0));
        }
    }
