/*
Write a program to explain the multithreading
 with the use of multiplication Tables. 
  Three threads must be defined.  
  Each one must create one multiplication table; 
  they are 5 table, 7 table and 13 table.

*/
import java.io.*;

class A extends Thread{
    public void run(){
        for(int i=1;i<=10;i++){
            System.out.println(5+"*"+i+"="+(i*5));
        }
        System.out.println("END OF THE 1ST THREAD");
    }
}

class B extends Thread{
    public void run(){
        for(int i=1;i<=10;i++){
            System.out.println(7+"*"+i+"="+(i*7));
        }
        System.out.println("END OF THE 2ND THREAD");
    }
}

class C extends Thread{
    public void run(){
        for(int i=1;i<=10;i++){
            System.out.println(21+"*"+"="+(i*21));
        }
        System.out.println("END OF THE 3RD THREAD");
    }
}

class Mul{
    public static void main(String args[])throws IOException{
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