#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream st(s);
    string word;
    int cnt=0;
    while(st >> word){
        cout<<word<<endl;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}