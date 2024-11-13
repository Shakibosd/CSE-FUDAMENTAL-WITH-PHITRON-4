#include<bits/stdc++.h>
using namespace std;
int main(){
    // string s;
    // cin>>s;
    // cout<<*s.begin()<<endl;
    // cout<<*(s.end()-1)<<endl;

    string s;
    cin>>s;
    //string::iterator it;
    for(auto it=s.begin(); it<s.end(); it++){
        cout<<*it;
    }
    return 0;
}