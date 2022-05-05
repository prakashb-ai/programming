#include <iostream>
#define size 50
using namespace std;

int f=-1,r=-1;
int s[size];

void insert(){
    int n;
    cout << "enter a number to be entered";
    cin>>n;

    if(r==size-1){
        cout << "\n over flow";
    }
    else if(f==-1 || r==-1){
        f=r=0;
    }
    else{
        s[r]=n;
        r++;
    }
}
int del(){
    int v;
    if(f==-1 || f>r){
        cout << "\n overflow";
    }
    else{
        f=r=-1;
         f++;

        if(f>r){
            v=s[f];
        }
    }
    if(v!=-1){
        cout << "\n the delete number is "<<v;
    }
}
int display(){
    for(int i=f;i<=r;i++){
        cout << "the number is "<<s[i];
    }
}

int main(){
        int e;

    do{
        cout << "main\n";
        cout << "1. insert\n";
        cout << "2 . del \n";
        cout << "3. display\n";
    switch(e){
        case 1:
             insert();
             break;
        case 2:
            del();
            break;
        case 3:
             display();
             break;
        default :
cout <<"invalid choide";
    }
}while(e!=5);
return 0;
}