/*Problem Statement

You will be given a list  of size . The list will contain data of some students where each student have ,  and . Then you will be given  queries, for each query there will be some commands. Commands are given below -

  -> Insert  into the list where  is the data of a student which contain ,  and . Then print the current student's data who has the maximum  from the list.
 -> Print the current student's data who has the maximum  from the list.
 -> Delete the student who has the maximum  from the list and print the current student who has the maximum  from the list.
Note: If there are multiple students with same  then we will select whose  is smaller. If the list is empty and you can't print anything then you should print "Empty".

Input Format

First line will contain .
Next  lines will contain ,  and  of student .
Third line will contain .
Next  lines will contain the commands.
Constraints

,  will contain only English lowercase letters and will not contain any spaces.
Marks
Output Format

For each command, print as asked from the list.
Sample Input 0

3
akib 23 95
jobbar 24 99
ali 25 100
8
1
2
2
2
0 kabir 15 65
0 asif 55 65
2
0 tamim 35 65
Sample Output 0

ali 25 100
jobbar 24 99
akib 23 95
Empty
kabir 15 65
kabir 15 65
asif 55 65
tamim 35 65*/

#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks != b.marks)
            return a.marks < b.marks;

        return a.roll > b.roll; 
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int c;
        cin >> c;

        if (c == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            pq.push(obj);
            if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
        }
        else if (c == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (c == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}