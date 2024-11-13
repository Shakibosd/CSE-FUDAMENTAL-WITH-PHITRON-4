/*Question: Create three static objects with the help of the constructor of the following class.
Student
{
	name;
	roll;
	section;
	math_marks;
	cls;
}
Then compare those 3 objects and print who got the highest math_marks and print his/her name.*/

#include<bits/stdc++.h>
using namespace std;
class Student{
public:
	int roll;
	int section;
	int math_marks;
	int cls;
    Student(int roll, int section, int math_marks, int cls){
		this->roll=roll;
		this->section=section;
		this->math_marks=math_marks;
		this->cls=cls;
    }
};
int main(){
    Student rahim(21, 1920, 91, 11);
    cout<<rahim.roll<<" "<<rahim.section<<" "<<rahim.math_marks<<" "<<rahim.cls<<endl;
    return 0;
}