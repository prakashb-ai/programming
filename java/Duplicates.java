import java.util.*;

public class Duplicates{
    public static void main(String args[]){
    String originalString;

    Scanner sc = new Scanner(System.in);

     System.out.println("enter a string");
     originalString = sc.nextLine();
     StringBuilder builder = new StringBuilder();

     for(int i=0;i<originalString.length();i++){
        if(builder.indexOf(String.valueOf(originalString.charAt(i)))==-1){
            builder.append(originalString.charAt(i));
        }
            }
             System.out.println("original string "+originalString);
        System.out.println("duplicates string "+builder);

}
}