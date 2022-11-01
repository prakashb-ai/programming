import java.util.*;
public class Array1{
    public static void main(String args[]){
        int size;
        boolean input = true;
        Scanner sc = new Scanner(System.in);
        do{
            try{
                System.out.println("enter the size of the array::");
                size = sc.nextInt();

                int a[] = new int[size];
                System.out.println("array of size is ::"+size);

            }
            catch(Exception e){
                System.out.println(e);
            }
            
        }while(input);
    }
}