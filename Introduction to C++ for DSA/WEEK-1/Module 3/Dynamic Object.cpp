#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    int cls;
    int roll;
    double gpa;
    Student(int cls, int roll, double gpa){
        this->cls=cls;
        this->roll=roll;
        this->gpa=gpa;
    }
};
int main(){
    Student rahim(10, 7, 4.78);
    Student *karim = new Student(10, 7, 4.48);
    cout<<karim->cls<<" "<<karim->roll<<" "<<karim->gpa<<endl;
    return 0;
}