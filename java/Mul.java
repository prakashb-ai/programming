import java.io.*;
class A extends Thread{
    public synchronized void run(){
        for(int i=1;i<=10;i++){
             System.out.println(5+"*"+i+"="+(i*5));
        }
        System.out.println("END OF THE 1ST THREAD");
    }
}

class B extends Thread{
    public synchronized void run(){
        for(int j=1;j<=10;j++){
            System.out.println(7+"*"+j+"="+(j*7));
        }
        System.out.println("END OF THE 2ND THREAD");
    }
}

class C extends Thread{
    public synchronized void run(){
        for(int k=1;k<=10;k++){
            System.out.println(21+"*"+k+"="+(k*21));
        }
        System.out.println("END OF THE 3RD THREAD");
    }
}

public class Mul{
    public static void main(String args[]) throws IOException{
         A ThreadA = new A();
         B ThreadB = new B();
         C ThreadC = new C();
         ThreadA.setPriority(Thread.MAX_PRIORITY);
         ThreadB.setPriority(Thread.NORM_PRIORITY);
         ThreadC.setPriority(Thread.MIN_PRIORITY);
         ThreadA.start();
         ThreadB.start();
         ThreadC.start();
    }
}