#include<bits/stdc++.h>
using namespace std;
int main(){
    //input type 1
    // vector<int>v;
    // int n;
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // for(int val:v){
    //     cout<<val<<" ";
    // }
    
    //input type 2
    int m;
    cin>>m;
    vector<int>b(m);
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    for(int valu:b){
        cout<<valu<<" ";
    }
    return 0;
}