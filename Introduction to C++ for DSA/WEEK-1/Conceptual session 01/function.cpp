/*#include<bits/stdc++.h>
using namespace std;
//pass by value 
void swap_val(int *a, int *b){//formal peramiter
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=10, b=20;
    swap_val(&a,&b);//actual peramiter
    cout<<a<<" "<<b;
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
//pass by reference 
//pass by address
void swap_val(int &a, int &b){//formal peramiter
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=10, b=20;
    swap_val(a,b);//actual peramiter
    cout<<a<<" "<<b;
    return 0;
}