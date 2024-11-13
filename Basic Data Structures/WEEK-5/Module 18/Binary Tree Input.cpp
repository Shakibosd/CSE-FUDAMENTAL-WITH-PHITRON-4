//10 20 60 30 50 70 -1 -1 40 -1 -1 -1 -1 80 -1 -1 -1
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
node* input_tree(){
    int val;
    cin>>val;
    node* root;
    if(val == (-1)){
        root = NULL;
    }
    else{
        root = new node(val);
    }
    queue<node*>q;
    if(root){
        q.push(root);
    }
    while(!q.empty()){
        //1. age kaj koro
        node* p = q.front();
        q.pop();

        //2. jabotio ja kaj ache koro
        int myLeft, myRight;
        cin>>myLeft >>myRight;
        node* left;
        node* right;
        if(myLeft == (-1)){
            left = NULL;
        }
        else{
            left = new node(myLeft);
        }
        if(myRight == (-1)){
            right = NULL;
        }
        else{
            right = new node(myRight);
        }
        p->left = left;
        p->right = right;

        //3. child gula ber kore ano
        if(p->left){
            q.push(p->left);
        }
        if(p->right){
            q.push(p->right);
        }
    }
    return root;
}
void level_order(node *root){
    if (root == NULL){
        cout << "Tree Nai" << endl;
        return;
    }
    queue<node *> q;
    q.push(root);
    while (!q.empty()){
        // 1. age ber kore ano
        node *p = q.front();
        q.pop();

        // jabotio ja kaj ace ta koro
        cout << p->val << " ";

        // tar children gula ke rakho
        if (p->left){
            q.push(p->left);
        }
        if (p->right){
            q.push(p->right);
        }
    }
}
int main(){
    node* root = input_tree();
    level_order(root);
    return 0;
}