#include<bits/stdc++.h>
using namespace std;
namespace rakib{
    int age = 23;
    void fun(void){
        cout<<"rakib namespace"<<endl;
    }
}
namespace shakib{
    int age2 = 27;
    void fun2(void){
        cout<<"shakib namespace"<<endl;
    }
}
using namespace rakib;
using namespace shakib;
int main(){
    cout<<age<<endl;
    cout<<age2<<endl;
    fun();
    fun2();
    return 0;
}