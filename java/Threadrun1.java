class Thrd implements Runnable{
    public void run(){
        for(int i=1;i<5;i++){
            System.out.print(i);
            try{
                Thread.sleep(1000);
            }
            catch(Exception e){}
        }
    }
}
class Threadrun1{
    public static void main(String args[]){
        Thrd k;
        Thread a,b;
        k = new Thrd();
        a = new Thread(k);
        b = new Thread(k);
        a.run();
        b.start();
        System.out.print("X");
    }
}