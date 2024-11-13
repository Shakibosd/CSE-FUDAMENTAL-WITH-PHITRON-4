#include<bits/stdc++.h>
using namespace std;
int main(){
    //pointer
    int a = 10;
    int *p;
    p=&a;
    *p=100;
    cout<<a<<endl;
    
    cout<<endl<<endl;

    //dynamic array
    int *ar = new int[10]; 
    ar[0]=10;
    ar[1]=100;
    cout<<*ar<<endl;
    free(ar);

    cout<<endl<<endl;

    int c=10, d=0;
    cout<<c/d<<endl;
    cout<<"Print Succesfull"<<endl;
    return 0;
}