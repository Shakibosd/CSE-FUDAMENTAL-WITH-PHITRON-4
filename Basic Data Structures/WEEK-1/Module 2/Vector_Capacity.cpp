#include<bits/stdc++.h>
using namespace std;
int main(){
    //max_size fun
    vector<int>v;
    cout<<v.max_size()<<endl;
    cout<<endl;
    //capacity fun
    cout<<v.capacity()<<endl;
    v.push_back(11);
    cout<<v.capacity()<<endl;
    cout<<endl;
    //empty fun
    vector<int>s;
    if(s.empty()){
        cout<<"Empty List"<<endl;
    }
    else{
        cout<<"Not Empty"<<endl;
    }
    cout<<endl;
    //clear and resize fun
    vector<int>n;
    n.push_back(10);
    n.push_back(20);
    n.push_back(30);
    n.push_back(40);
    cout<<endl;
    //n.clear();
    n.resize(2);
    n.resize(7);
    cout<<n.size()<<endl;
    for(int i=0; i<n.size(); i++){
        cout<<n[i]<<" ";
    }
    return 0;
}