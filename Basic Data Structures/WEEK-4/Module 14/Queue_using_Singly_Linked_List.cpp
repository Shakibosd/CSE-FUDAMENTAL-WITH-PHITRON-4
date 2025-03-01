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
class myQueue{
public:
    node* head = NULL;
    node* tail = NULL;
    int sz=0;
    void push(int val){
        sz++;
        node* newNode = new node(val);
        if(head==NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void pop(){
        sz--;
        node* newNode = head;
        head = head->next;
        delete newNode;
        if(head == NULL){
            tail = NULL;
        }
    }
    int front(){
        return head->val;
    }
    int size(){
        return sz;
    }
    bool empty(){
        if(sz==0){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    myQueue q;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        q.push(x); 
    }
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // cout<<q.front()<<endl;
    // q.pop();
    // cout<<q.front()<<endl;
    // q.pop();
    return 0;
}
