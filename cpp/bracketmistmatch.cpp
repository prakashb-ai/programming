#include <stdio.h>

int main(){

char bracket[30];
int x=0;
int i=0;

printf("\n enter a bracket :-");
scanf("%s",bracket);

while(bracket[i]!='\0'){
    if(bracket[i]=='(' || bracket[i]=='{' || bracket[i]=='['){
        x++;
    }
    else if(bracket[i]==')' || bracket[i]=='}' || bracket[i]==']'){
        x--;
    
    if(x<0)
    break;
    }
  i++;
}
if(x==0){
    printf("balanced expression");
}
else {
    printf("unbalnced expression");
}
    printf("\n");


    return 0;
}