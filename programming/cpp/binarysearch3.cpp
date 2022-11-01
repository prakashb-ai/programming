#include <stdio.h>

int binarys_rec(int a[],int low,int high,int key){
    int mid;
    mid = (low+high)/2;
    if(low>high)
      return -1;
       else if(a[mid] == key) 
         return mid;
         else if(a[mid]< key)
           return binarys_rec(a,mid+1,high,key);
             else 
               return binarys_rec(a,low,mid-1,key);
     
}

int binarys_nonrec(int a[],int low,int high,int key){
    int mid;
    while(low<=high){
        mid = (low+high)/2;
        if(a[mid] == key)
          return mid;
            else if(a[mid]< key)
              return low = mid+1;
               else 
                    return high = mid -1;

    }
}

int main(){
    int a[100],low,high,i,n,p,key;

       printf("\n enter the size of the array");
       scanf("%d",&n);
       low =0;
       high = n-1;

       printf("enter the elments of the array");
       for(i=0;i<n;i++){
           scanf("%d",&a[i]);
       }

       printf("\n enter a key");
       scanf("%d",&key);

       printf("\n...............recursive function......................\n");
       p = binarys_rec(a,low,high,key);
       if(p<0){
           printf("element not found");
       }
       else {
           printf("element found at position %d",p+1);
       }


       printf("\n............non recurisve function...............\n");
       p = binarys_nonrec(a,low,high,key);
       if(p<0){
           printf("element not found");
       }
       else {
           printf("element found at position %d",p+1);
       }

}