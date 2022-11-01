public class Bubblesortexample{
    static void bubblesort(int[] arr){
        int n= arr.length;
        int temp=0;
        for(int i=0;i<n;i++){
            for(int j=1;j<(n-i);j++){
                if(arr[j-1]>arr[j]){
                    temp = arr[j-1];
                    arr[j-1] = arr[j];
                    arr[j] = temp;
                }
            }
        }

    }
    public static void main(String args[]){
        int arr[] ={1,8,02,0,75,12,65,03};
System.out.println("before swap");
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+"");
        }
    System.out.print("\n");

    bubblesort(arr);
     System.out.println("after swap");
    for(int i=0;i<arr.length;i++){
        System.out.print(arr[i]+" ");
    }
    }
}