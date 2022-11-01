 import java.util.Scanner;
 public class Character{
    public static void main(String args[]){
        String str;
        int Alphabets = 0,num =0,space =0,special =0;
        Scanner sc = new Scanner(System.in);

        System.out.println("enter the string: ");
        str = sc.nextLine();
        for(int i=0;i<str.length();i++){
            
            char ch = str.charAt(i);
            if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
                Alphabets++;
            }
            else if(ch>='0' && ch<='9'){
                num++;
            }
            else if(ch ==' '){
                space++;
            }
            else {
                special++;
            }
        }
        System.out.println("/n alphabets letter :"+Alphabets);
        System.out.println("/n number: "+num);
        System.out.println("space: "+space);
        System.out.println("special characters: "+special);
    }
 }