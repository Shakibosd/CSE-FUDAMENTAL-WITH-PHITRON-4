#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int roll;
    int mark;
};
int main(){
    int n;
    cin>>n;
    Student a[n];
    for(int i=0; i<n; i++){
        cin>>a[i].name>>a[i].roll>>a[i].mark;
    }
    Student mn;
    mn.mark=INT_MAX;

    Student mx;
    mx.mark=INT_MIN;
    for(int i=0; i<n; i++){
        if(a[i].mark < mn.mark){
            mn = a[i];
        }
    }
    for(int i=0; i<n; i++){
        if(a[i].mark > mx.mark){
            mx = a[i];
        }
    }
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.mark<<endl;
    cout<<mx.name<<" "<<mx.roll<<" "<<mx.mark<<endl;
    return 0;
}