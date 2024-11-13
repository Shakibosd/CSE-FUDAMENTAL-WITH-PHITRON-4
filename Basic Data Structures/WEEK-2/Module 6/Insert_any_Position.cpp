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
        cout<<endl<<"Inserted At Head : "<<endl<<endl;
        return;
    }

    node * tmp = head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next = newNod;
    cout<<"Inserted At Tail : "<<endl<<endl;
}
//function insert any position
void insert_any_position(node* head, int pos, int v){
    node* newNode = new node(v);
    node* tmp = head;
    for(int i=1; i<=pos-1; i++){
        tmp = tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<endl<<endl<<"Inserted At Position : "<<pos<<endl<<endl;
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
//main function infinity loop & user input & condition
int main(){
    node * head = NULL;
    while(true){
        cout<<"Option 1: Insert At Tail"<<endl;
        cout<<"Option 2: Print Linkd List"<<endl;
        cout<<"Option 3: Insert At Any Position"<<endl;
        cout<<"Option 4: Terminate"<<endl;
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
            int pos,v;
            cout<<"Enter Position : ";
            cin>>pos;
            cout<<"Enter Value : ";
            cin>>v;
            insert_any_position(head, pos, v);
        }
        else if(op==4){
            break;
        }
    }
    return 0;
}