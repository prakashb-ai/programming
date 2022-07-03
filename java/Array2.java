import java.util.*;
public class Array2{
    public static void main(String args[]){
        int size;
        boolean input = true;
        Scanner sc = new Scanner(System.in);
        do{
        try{
            System.out.println("enter the size of the arrya:-");
            size = sc.nextInt();
            int a[] = new int[size];

            System.out.println("size of the array is::"+size);
        }
        catch(Exception e){
            System.out.println(e);
        }
        }while(input);
    }
}