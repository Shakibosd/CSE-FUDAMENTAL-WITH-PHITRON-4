#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    char name[50];
    int roll;
    double gpa;
};
int main(){
    Student a;
    cin.getline(a.name,50);
    cin>>a.roll>>a.gpa;
    cout<<a.name<<" "<<a.roll<<" "<<a.gpa<<endl;
    return 0;
}