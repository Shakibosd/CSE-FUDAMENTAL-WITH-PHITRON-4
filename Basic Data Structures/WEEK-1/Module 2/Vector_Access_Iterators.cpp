#include<bits/stdc++.h>
using namespace std;
int main(){
    //access
    vector<int>v={1,2,3,4,5};
    cout<<v.back()<<endl;
    cout<<v.front()<<endl;
    cout<<endl<<endl;
    //iterator
    // vector<int>::iterator it;
    for(auto it=v.begin(); it<v.end(); it++){
        cout<<*it<<" ";
    }
    return 0;
}