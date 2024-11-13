#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int val;
        node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void print_revers_recursion(node* n){
    //base case
    if(n==NULL){
        return;
    }

    print_revers_recursion(n->next);
    cout<<n->val<<" ";
}
void print_node(node* head){
    node* tmp = head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void print_revers(node *&head, node *cur){
    if(cur->next == NULL){
        head = cur;
        return;
    }
    print_revers(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}
int main(){
    node* head = new node(10); 
    node* a = new node(20); 
    node* b = new node(30); 
    node* c = new node(40); 
    node* d = new node(50);
    node* tail = d;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_revers(head, head);
    print_node(head);
    return 0;
}