import java.util.*;
abstract class Vehicle{
     abstract void numVehicle();
}

class Car extends Vehicle{
    int n;
    void numVehicle(){
        System.out.println("number of available cars:: "+n);
    }
    Car(int c){
        this.n = c;
    }
}

class Truck extends Vehicle{
    int n;
    void numVehicle(){
        System.out.println("number of available Trucks::"+n);
    }
    Truck(int t){
        this.n = t;
    }
}

class Motor{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int c,t;
        System.out.println("enter the number of the available cars::");
        c =sc.nextInt();

        System.out.println("enter the number of the available truck::");
        t = sc.nextInt();

        Car cc = new Car(c);
        Truck tt = new Truck(t);
        cc.numVehicle();
        tt.numVehicle();

    }
}