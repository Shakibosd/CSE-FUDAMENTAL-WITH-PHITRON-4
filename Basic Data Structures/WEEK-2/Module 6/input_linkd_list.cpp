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
//insert tail
void insert_tail(node *&head, int v){
    node * newNod = new node(v);

    if(head==NULL){
        head = newNod;
        return;
    }

    node * tmp = head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next = newNod;
}
//function print
void print_link_list(node* head){
    cout<<endl;
    cout<<"Your Linkd List : ";
    node * tmp = head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl<<endl;
}
int main(){
    int val;
    node* head = NULL;
    while(true){
        cin>>val;
        if(val==-1)break;
        insert_tail(head,val);
    }
    print_link_list(head);
    return 0;
}