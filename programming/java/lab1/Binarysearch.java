public class Binarysearch{
    public static void Binarysearchsort(int arr[],int first,int last,int key){
        int mid = (first+last)/2;
        
        while(first<=last){
            if(arr[mid] == key){
                System.out.println("element is found at index"+mid);
            }
            else if(arr[mid]<key){
                first = mid+1;
            }
            else{
                last = mid-1;
            }
        }
        if(first>last){
            System.out.println("Element is not found");
        }
    }
    public static void main(String args[]){
        int arr[] ={10,20,30,40};
        int key =20;
        int last =arr.length-1;
        Binarysearchsort(arr,0,last,key);
    }
}