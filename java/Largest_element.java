class Largest_element{
    public static void main(String args[]){
        int a[] = {45,28,96,20,45,57,69 };
         int max = a[0];

         for(int i=0;i<a.length;i++){
             if(a[i]>max){
                 max = a[i];

                 System.out.println(max);
             }
         }
    }
}