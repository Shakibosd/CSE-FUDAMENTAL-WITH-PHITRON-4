#include<bits/stdc++.h>
using namespace std;
int fun(int *&p){
    cout<<&p<<endl;
}
int main(){
    int val=10;
    int *ptr = & val;
    fun(ptr);
    cout<<&ptr<<endl;
    return 0;
}