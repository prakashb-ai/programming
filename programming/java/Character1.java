//write a program to print a string name and check the whether how many number and space are there in one word

import java.util.Scanner;//it is for scanner packages

public class Character1{
    public static void main(String args[]){
        int alphabets=0, num=0,space=0,special=0;
        String str;

        Scanner sc = new Scanner(System.in);
      
       System.out.println("enter a string :");
       str = sc.nextLine();

       //now string length;
       for(int i=0;i<str.length();i++){
        char ch = str.charAt(i);
        if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
            alphabets++;
        }
        else if(ch>='0' && ch<='9'){
            num++;
        }
        else if(ch == ' '){
            space++;
        }
        else {
            special++;
        }
       }
         System.out.println("string name is "+alphabets);
         System.out.println("number is :"+num);
         System.out.println("spaces is:" +space);
         System.out.println("special is :"+special);
    }
}

