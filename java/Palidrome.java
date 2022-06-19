
import java.util.*;
public class Palidrome{
    public static void main(String args[]){
        String sen ="";
        String wd =" ";
        String wd1=" ";
        char ch = ' ',lastchar = ' ';
        int i=0,len =0;
        Scanner sc = new Scanner(System.in);
        System.out.println("enter a sentence::");
        sen = sc.nextLine();

        sen = sen+" ";//it gives after word space
        len = sen.length();//it means length of the sentences

        System.out.println("palindrome sentences are:");
        for(i=0;i<len;i++){
            ch = sen.charAt(i);//it means the each of the word it show the each character of the word
            if(ch==' '){
                if(wd.equalsIngoreCase(wd1)==true){
                    System.out.println(wd);
                }
                wd1 = "";
                wd = "";
            }
            else{
                wd = wd+ch;
                wd1 = wd1+ch;
            }
        }

    }
}