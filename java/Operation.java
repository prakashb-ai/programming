import java.util.*;
import java.lang.*;

interface Intoperation{
    void ispostive(int n);
    void isnegative(int n);
    void isEven(int n);
    void isodd(int n);
    void fact(int n);
    void sum(int n);
    void isprime(int n);
}
class MyNumber implements Intoperation{
        private int num;
        MyNumber(){
            num =0;
        }
        MyNumber(int num){
            this.num = num;
        }
        public void ispostive(int num){
            if(num > 0){
                System.out.println("postive number::");
            }
            else {
                System.out.println("not a postive number::");
            }
        }
        public void isnegative(int num){
            if(num < 0){
                System.out.println("negative number::");
            }
            else {
                System.out.println("it is not negative number::");
            }

        }
        public void isEven(int num){
            if(num/2==0){
                System.out.println("it is a even number::");
            }
            else {
                System.out.println("it is not even number::");
            }
        }
        public void isodd(int num){
            if(num/2!=0){
                System.out.println("it is a prime number");
            }
            else {
                System.out.println("it is not a prime number");
            }

        }
        public void fact(int num){
            int fact =1,no = num;
            if(no<0){
                no = no-no-no;
                            System.out.println("num is ::"+no);

            }
            for(int i=1;i<num+1;i++){
                fact = fact*i;
            }
            System.out.println("factorial is ::"+fact);
        }
        public void sum(int num){
            int sum =0,no = num;
            while(no!=0){
                sum = sum+(no%10);
            }
            System.out.println("sum of digits is ::"+sum);
        }
        public void isprime(int num){
            int i,j=0;
            for(i=2;i<num;i++){
                if(num%i==0){
                    j = 1;
                }
                if(j ==0 || num ==1){
                    System.out.println("it is prime ::"+num);
                }
                else {
                    System.out.println("it is not prime");
                }
            }
        }
}
class Operation{
    public static void main(String args[]){
        MyNumber n = new MyNumber();
        int num;
        Scanner sc = new Scanner(System.in);
        System.out.println("enter a number::");
        num = sc.nextInt();
        n.ispostive(num);
        n.isnegative(num);
        n.isEven(num);
        n.isodd(num);
        n.fact(num);
        n.sum(num);

        n.isprime(num);
    }
}