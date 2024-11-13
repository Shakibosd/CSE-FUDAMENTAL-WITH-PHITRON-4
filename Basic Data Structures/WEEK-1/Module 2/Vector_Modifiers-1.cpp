#include<bits/stdc++.h>
using namespace std;
int main(){
    //copy index
    vector<int>v={1,2,3,4,5};
    vector<int>x={10,20,30,40,50};
    x=v;
    for(int i=0; i<v.size(); i++){
        cout<<x[i]<<" ";
    }
    cout<<endl<<endl;
    //push back & and pop back fun
    vector<int>s={1,2,3,4,5};
    s.pop_back();
    s.push_back(6);
    for(int i=0; i<s.size(); i++){
        cout<<s[i]<<" ";
    }
    cout<<endl<<endl;
    //insert fun
    vector<int>c={1,2,3,4,5,6};
    vector<int>c2={10,20,30,40,50,60};
    v.insert(v.begin()+2,c2.begin(),c2.end());
    for(int b:v){
        cout<<b<<" ";
    }
    cout<<endl<<endl;
    //erase fun
    vector<int>k={1,2,3,4,5};
    //k.erase(k.begin()+2, k.begin()+3);
    k.erase(k.begin()+2, k.end());
    for(int h:k){
        cout<<h<<" ";
    }
    return 0;
}