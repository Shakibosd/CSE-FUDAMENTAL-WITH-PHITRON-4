#include<bits/stdc++.h>
using namespace std;
int main(){
    string a = "Hello", b = "Wrold";
    a+=b;
    a.append(b);
    cout<<a<<endl;

    //a+="A";
    a.push_back('A');
    a.push_back('d');
    a.pop_back();
    a.pop_back();
    cout<<a<<endl;
    return 0;
}