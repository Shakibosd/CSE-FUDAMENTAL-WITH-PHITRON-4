#include<bits/stdc++.h>
using namespace std;
class product{
public:
    int id;
    string name;
    double price;
};
int main(){
    int n;
    cin>>n;
    product pro[n];
    for(int i=0; i<n; i++){
        cin>>pro[i].id>>pro[i].name>>pro[i].price;
    }
    for(int i=0; i<n; i++){
        cout<<pro[i].id<<" "<<pro[i].name<<" "<<pro[i].price<<endl;
    }
    return 0;
}