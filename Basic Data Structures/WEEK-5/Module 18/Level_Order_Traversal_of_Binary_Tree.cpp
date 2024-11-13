#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int val;
        node* left;
        node* right;
    node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }    
};
void level_order(node* root){
    //base case
    if(root == NULL){
        cout<<"Tree Nai"<<endl;
        return;
    }
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        //1. age ber kore ano
        node* p = q.front();
        q.pop();

        //2. tarpor jabotio ja kaj ache koro
        cout<<p->val<<" ";

        //3. tarpor children gula ke print kora
        if(p->left){
            q.push(p->left);
        }
        if(p->right){
            q.push(p->right);
        }
    }
}
int main(){
    node *root = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *d = new node(50);
    node *e = new node(60);
    node *f = new node(70);
    node *g = new node(80);
    node *h = new node(90);
    node *i = new node(100);
    // connection
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    b->right = d;
    d->left = f;
    d->right = g;
    h->right = i;
    //recursion call
    level_order(root);
    return 0;
}