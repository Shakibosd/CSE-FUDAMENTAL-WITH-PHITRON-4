#include<bits/stdc++.h>
using namespace std;
void funck(stringstream& st){
    string word;
    if(st>>word){
        // cout<<word<<endl;//straite print
        funck(st);
        cout<<word<<endl;//reverse print
    }
}
int main(){
    string s;
    getline(cin,s);
    stringstream st(s);
    funck(st);
    return 0;
}

