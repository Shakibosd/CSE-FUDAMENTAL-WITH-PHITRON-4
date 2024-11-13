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
    node* head =  new node(1734);
    node* a =  new node(1892);

    head->next=a;

    cout<<head->val<<endl;
    cout<<a->val<<endl;
    cout<<head->next->val<<endl;
    //cout<<(*(*head).next).val<<endl;
    return 0;
}