/*Problem Statement

You need to take a doubly linked list of integer value as input. You need to tell if the doubly linked list forms a palindrome or not.

Note: You need to solve this using Doubly Linked List, otherwise you will not get marks.

Input Format

Input will contain the values of the doubly linked list, and will terminate with -1.
Constraints

1 <= N <= 10^6; Here N is the maximum number of nodes of the linked list.
0 <= V <= 1000; Here V is the value of each node.
Output Format

Output "YES" if it forms a palindrom otherwise output "NO".
Sample Input 0

1 2 3 2 1 -1
Sample Output 0

YES
Sample Input 1

1 2 2 1 -1
Sample Output 1

YES
Sample Input 2

1 -1
Sample Output 2

YES
Sample Input 3

1 2 3 1 -1
Sample Output 3

NO*/

#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int val;
        node* next;
        node* prev;
    node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_at_tail(node*& head, node*& tail, int val){
    node* newNode = new node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void print_linked_list(node* head){
    node* tmp = head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int palindrom_at_node(node* head, node* tail){
    while(head!=tail && head->prev!=tail){
        if(head->val != tail->val){
            return 0;
        }
        head = head->next;
        tail = tail->prev;
    }
    return 1;
}
int main(){
    node* head = NULL;
    node* tail = NULL;
    int val;
    while(1){
        cin>>val;
        if(val == (-1)){
            break;
        }
        insert_at_tail(head, tail, val);
    }
    int flag = palindrom_at_node(head, tail);
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}