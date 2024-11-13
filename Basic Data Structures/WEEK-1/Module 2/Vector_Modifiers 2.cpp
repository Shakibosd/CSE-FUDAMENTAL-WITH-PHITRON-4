#include<bits/stdc++.h>
using namespace std;
int main(){
    //replace
    vector<int>v={1,2,3,4,5,6,7,8,9,10};
    replace(v.begin(), v.end(),2,10);
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl<<endl;
    //find
    vector<int>k={1,2,3,4,5,6,7,8,9,10};
    // vector<int>::iterator it;
    auto it=find(k.begin(), k.end(), 100);
    if(it==k.end()){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Found"<<endl;
    }
    return 0;
}