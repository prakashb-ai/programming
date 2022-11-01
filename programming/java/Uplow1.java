class LowerCase implements Runnable{
    public void run(){
        for(char i='a';i<='z';i++){
            System.out.print(i+" ");
            try{
                Thread.sleep(26);
            }
             catch(Exception e){}
        }
    }
}

class UpperCase implements Runnable{
    public void run(){
        for(char i='A';i<='Z';i++){
            System.out.print(i+" ");
        
        try{
            Thread.sleep(26);
        }
        catch(Exception e){}
    }
    }
}
class Uplow1{
    public static void main(String args[]){
        Runnable r = new UpperCase();
        Thread t = new Thread(r);
        Runnable r1 = new LowerCase();
        Thread t1 = new Thread(r1);
        t.start();
        t1.start();
    }
}