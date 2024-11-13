// #include <bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node *next;
//     node *prev;
//     node(int val){
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };
// void print_normal(node* head){
//     node* tmp = head;
//     while(tmp != NULL){
//         cout<<tmp->val<<" ";
//         tmp = tmp->next;
//     }
//     cout<<endl;
// }
// //to pointers tecnic
// void revers_node(node *head, node *tail){
//     node* i=head;
//     node* j=tail;
//     while(i!=j && i->next!=j){
//         swap(i->val, j->val);
//         i=i->next;
//         j=j->prev;
//     }
// }
// int main(){
//     node *head = new node(10);
//     node *a = new node(20);
//     node *b = new node(30);
//     node* tail = b;

//     head->next = a;
//     a->prev = head;
//     a->next = b;
//     b->prev = a;

//     revers_node(head, tail);
//     print_normal(head);
//     return 0;
// }
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
void print_normal(node* head){
    node* tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void revers_node(node *head, node *tail){
    node* i=head;
    node* j=tail;
    while(i!=j && i->next!=j){
        swap(i->val, j->val);
        i=i->next;
        j=j->prev;
    }
}
int main(){
    node* head = new node(10); 
    node* a = new node(20); 
    node* b = new node(30); 
    node* c = new node(40); 
    node* d = new node(50);
    node* tail = d;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;

    revers_node(head, tail);
    print_normal(head);
    return 0;
}