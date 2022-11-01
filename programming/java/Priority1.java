import java.io.*;

class A extends Thread{
    public void run(){
        for(int i=1;i<=11;i++){
            System.out.println(i+" ");
        }
        System.out.println("END OF THE 1ST THREAD");
    }
}

class B extends Thread{
    public void run(){
        for(int j=11;j<=21;j++){
            System.out.println(j+" ");
        }
        System.out.println("END OF THE 2ND THREAD");
    }
}
class C extends Thread{
    public void run(){
        for(int k=21;k<=30;k++){
            System.out.println(k+" ");
        }
        System.out.println("END OF THE 3RD THREAD");
    }
}

class Priority1{
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