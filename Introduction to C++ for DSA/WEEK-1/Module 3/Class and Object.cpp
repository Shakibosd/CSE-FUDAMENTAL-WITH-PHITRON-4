#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    char name[100];
    int roll;
    double cgpa;
};
int main(){
    Student a;
    a.roll=10;
    a.cgpa=3.45;
    char tmp[100]="Shakib";
    strcpy(a.name, tmp);
    cout<<a.roll<<" "<<a.cgpa<<" "<<a.name<<endl;
    return 0;
}