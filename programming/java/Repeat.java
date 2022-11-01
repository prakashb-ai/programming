import java.util.*;

public class Repeat{
    public static void main(String args[]){
    int wrc = 1;
    String str;
    Scanner sc = new Scanner(System.in);

        System.out.println("enter a line of text");
    str = sc.nextLine();


    String words[ ] = str.split(" ");
    for(int i=0;i<words.length;i++){
        for(int j=i+1;j<words.length;j++){
            if(words[i].equals(words[j])){
                wrc++;
                words[i]="0";
            }
        }

            if(words[i]!="0"){
                System.out.println("words ::"+wrc);
            }
    }
}
}
