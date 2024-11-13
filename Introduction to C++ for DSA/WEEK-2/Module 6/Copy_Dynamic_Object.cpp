#include<bits/stdc++.h>
using namespace std;
class Person{
public:
    string name;
    int age;
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};
int main(){
    Person* kholi = new Person("Virat Kholi",35);
    Person* dhoni = new Person("Ms Dhoni",42);
    // dhoni->name = kholi->name;
    // dhoni->age = kholi->age;
    *dhoni=*kholi;
    delete kholi;
    cout<<dhoni->name<<" "<<dhoni->age<<endl;
    return 0;
}