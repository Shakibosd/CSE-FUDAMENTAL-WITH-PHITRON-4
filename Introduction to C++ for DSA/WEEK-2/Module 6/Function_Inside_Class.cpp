#include<bits/stdc++.h>
using namespace std;
class Person{
public:
    string name;
    int age;
    int mark1;
    int mark2;
    Person(string name, int age, int mark1, int mark2){
        this->name = name;//(*this.name = name)
        this->age = age;
        this->mark1 = mark1;
        this->mark2 = mark2;
    }
    void hii(void){
        cout<<name<<" "<<age<<endl;
    }
    int total_mark(void){
        return mark1 + mark2;
    }
};
int main(){
    Person nokib("Hujaifa",10,80,85);
    nokib.hii();
    cout<<nokib.total_mark()<<endl;
    return 0;
}