import java.util.*;
public class Vowels{
    public static void main(String args[]){
        int vcount =0,ccount=0;
        String str;
       System.out.println("enter a word");
       Scanner sc = new Scanner(System.in);
       str = sc.nextLine();
       str = str.toLowerCase();

   for(int i=0;i<str.length();i++){
    if(str.charAt(i)=='a' || str.charAt(i)=='e' || str.charAt(i)== 'i' || str.charAt(i) == 'o' || str.charAt(i) == 'u'){
        vcount++;
    }
    else {
        ccount++;
    }
   }        
        System.out.println("vowels are ::"+vcount);
        System.out.println("constants are::"+ccount);

    }
}