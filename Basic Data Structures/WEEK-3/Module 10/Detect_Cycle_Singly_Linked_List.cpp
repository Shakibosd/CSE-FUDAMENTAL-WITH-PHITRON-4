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
int main(){
    node* head = new node(10);
    node* a = new node(20);
    node* b = new node(30);
    // node* c = new node(40);

    head->next = a;
    a->next = b;
    // b->next = c;
    // c->next = a;

    node* fast = head;
    node* slow = head;
    int flag = 0;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow){
            flag = 1;
            break;
        }
    }
    if(flag==1){
        cout<<"Detect Cycle"<<endl;
    }
    else{
        cout<<"No Cycle"<<endl;
    }
    return 0;
}