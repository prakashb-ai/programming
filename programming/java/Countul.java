import java.util.*;

public class Countul{
    public static void main(String args[]){
        int upper=0,lower =0;
        String str;
        Scanner sc = new Scanner(System.in);
        System.out.println("enter a string::");
        str  = sc.nextLine();
        for(int i=0;i<str.length();i++){
       char ch= str.charAt(i);

        if(ch>='A' && ch<='Z'){
            upper++;

        }
        else if(ch>='a' && ch<='z'){
            lower++;
        }
        }
        System.out.println("upper cases is ::"+upper);
        System.out.println("lower cases is:: "+lower);
    }
}