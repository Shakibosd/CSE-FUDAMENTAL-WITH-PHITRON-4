#include<bits/stdc++.h>
using namespace std;
int *fun(){
    int *a = new int;
    *a = 100;
    return a;
}
int main(){
    int *p = fun();
    cout<<*p<<endl;
    int *a = new int;
    *a=10;
    cout<<*a<<endl;
    delete a;

    return 0;
}