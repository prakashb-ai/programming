import java.util.*;

public class Duplicates2{
    public static void main(String args[]){
        String originalString;
        Scanner sc = new Scanner(System.in);

        System.out.println("enter a string::");
        originalString = sc.nextLine();

        StringBuilder builder = new StringBuilder();
        for(int i=0;i<originalString.length();i++){
            if(builder.indexOf(String.valueOf(originalString.charAt(i))) == -1){//it means new words it will be check with index and if word index is equal then it will be delete duplicate word
                builder.append(originalString.charAt(i));//it means after duplicates remain words will show them;
            }
            
        }

            System.out.println("original string::"+originalString);
            System.out.println("after duplicates::"+builder);
    }
}