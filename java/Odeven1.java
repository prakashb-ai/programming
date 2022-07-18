public class Odeven1{
    int counter=1;
    static int N;
    public void printOddnumber(){
        synchronized(this){
            while(counter<N){
                while(counter%2==0){
                    try{
                        wait();
                    }
                    catch(InterruptedException e){
                        e.printStackTrace();
                    }
                }
                System.out.println(counter+" ");
                counter++;
                notify();
            }
        }
    }
    public void printEvennumber(){
        synchronized(this){
            while(counter<N){
                while(counter%2==1){
                    try{
                        wait();
                    }
                    catch(InterruptedException e){
                        e.printStackTrace();
                    }
                }
                System.out.println(counter+" ");
                counter++;
                notify();
            }
        }
    }
    public static void main(String args[]){
        N = 10;
        Odeven1 mt = new Odeven1();
        Thread t1 = new Thread(new Runnable(){
                public void run(){
                    mt.printEvennumber();
                }
        });
        Thread t2 = new Thread(new Runnable(){
                public void run(){
                    mt.printOddnumber();
                }
        });
        t1.start();
        t2.start();
    }

}