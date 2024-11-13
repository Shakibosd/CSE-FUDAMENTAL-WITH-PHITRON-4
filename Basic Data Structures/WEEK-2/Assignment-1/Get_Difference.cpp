/*Problem Statement

You need to take a singly linked list of integer value as input and print the difference between the maximum and minimum value of the singly linked list.

Note: You must use singly linked list to solve this problem, otherwise you will not get marks.

Input Format

Input will contain the values of the singly linked list, and will terminate with -1.
Constraints

1 <= N <= 10^5; Here N is the maximum number of nodes of the linked list.
-10^9 <= V <= 10^9; Here V is the value of each node.
Output Format

Output the difference between the maximum and minimum value.
Sample Input 0

2 4 1 5 3 6 -1
Sample Output 0

5
Sample Input 1

2 -1
Sample Output 1

0*/

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//         int val;
//         node* next;
//     node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// void insert_at_tail(node *&head, node *&tail, int val){
//     node* newNode = new node(val);
//     if(head==NULL){
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     tail->next = newNode;
//     tail = newNode;
// }
// void print_linded_list(node* head){
//     node* tmp = head;
//     while(tmp!=NULL){
//         cout<<tmp->val<<endl;
//         tmp = tmp->next;
//     }
// }
// int main(){
//     node* head = NULL;
//     node* tail = NULL;
//     int val;
//     while(1){
//         cin>>val;
//         if(val == (-1)){
//             break;
//         }
//         insert_at_tail(head, tail, val);
//     }
//     int min = INT_MAX, max = INT_MIN;
//     node* tmp = head;
//     while(tmp!=NULL){
//         if(tmp->val > max){
//             max = tmp->val;
//         }
//         if(tmp->val < min){
//             min = tmp->val;
//         }
//         tmp = tmp->next;
//     }
//     cout<<max-min<<endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(node *&head, node *&tail, int val)
{
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linded_list(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    int val;
    while (1)
    {
        cin >> val;
        if (val == (-1))
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    int min = INT_MAX, max = INT_MIN;
    node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val > max)
        {
            max = tmp->val;
        }
        if (tmp->val < min)
        {
            min = tmp->val;
        }
        tmp = tmp->next;
    }
    cout << max - min << endl;
    return 0;
}