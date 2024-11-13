//Stack
//LIFO-> Life Of Principal
#include<bits/stdc++.h>
using namespace std;
    int b = 30;
    void fun2(void){
    cout<<"I Am From Fun2"<<endl;
}
void fun1(void){
    int b = 20;
    cout<<"I Am From Fun1"<<endl;
    fun2(); 
}
int main(){
    int a = 10;
    cout<<"I Am From Main"<<endl;
    fun1();
    return 0;
}