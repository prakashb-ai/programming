import java.util.*;
public class Odd{
    public static void main(String args[]){
        String str;
        int count =0;

        Scanner sc = new Scanner(System.in);
        System.out.println("enter a line of text");
        str = sc.nextLine();
        String word[ ] = str.split(" ");
        for(int i=0;i<word.length;i++)
            if(word[i].length()%2!=0){
              count++;

                System.out.println("odd words:"+count);
            }
         
        
           
    }
}