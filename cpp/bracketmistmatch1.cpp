#include <stdio.h>


int main(){

char b[50];
int x=0;int i=0;
printf("\n enter your expression:-");
scanf("%d",b);

while(b[i]!='\0'){
    if(b[i]=='('|| b[i]=='{' || b[i]=='['){
        x++;
    }
    else if(b[i]==')'|| b[i]=='}' || b[i]==']'){
        x--;
        if(x<0)
        break;
    }
    i++;
}
if(x==0){
    printf("\n balanced expression");
}
else{
    printf("\n unbalanced expression");
}


















    return 0;
}