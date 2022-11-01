import java.util.*;

class Prog15{
    private int l,b;

    public int area(){
        return l*b;
    }
    void per(){
        int l,b,per;
        System.out.println("enter the length of rectangle");
        Scanner sc = new Scanner(System.in);
        l = sc.nextInt();

        System.out.println("enter the breadth of rectangle");
        b = sc.nextInt();

        per = 2*(l+b);
        System.out.println("perimenter is "+per);
        
    }
    public static void main(String args[]){
        Prog15 r = new Prog15();

        r.l=20;
        r.b = 15;

        System.out.println("area of reactangle"+r.area());
        r.per();
    }
}