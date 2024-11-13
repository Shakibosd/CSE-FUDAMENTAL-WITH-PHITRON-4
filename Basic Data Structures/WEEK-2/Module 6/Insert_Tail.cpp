#include<bits/stdc++.h>
using namespace std;
//node
class node{
    public:
        int val;
        node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
//function insert
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
    cout<<"Your Linkd List : ";
    node * tmp = head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
//main function user input & condition & infinity loop
int main(){
    node * head = NULL;
    while(true){
        cout<<"Option 1: Insert At Tail"<<endl;
        cout<<"Option 2: Print Linkd List"<<endl;
        cout<<"Option 3: Terminate"<<endl;
        int op;
        cin>>op;
        if(op==1){
            cout<<"Please Enter Value : ";
            int v;
            cin>>v;
            insert_tail(head,v);
        }
        else if(op==2){
            print_link_list(head);
        }
        else if(op==3){
            break;
        }
    }
    return 0;
}