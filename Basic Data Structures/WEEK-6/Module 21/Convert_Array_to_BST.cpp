// 6
//2 5 8 12 15 18
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
node* convert_arry_bst(int a[], int n, int l, int r){
    if(l>r){
        return NULL;
    }
    int mid = (l+r)/2;
    node* root = new node(a[mid]);
    node* leftNode = convert_arry_bst(a, n, l, mid-1);
    node* rightNode = convert_arry_bst(a, n, mid+1, r);
    root->left = leftNode;
    root->right = rightNode;
    return root;
}
void level_order(node* root){
    if(root == NULL){
        cout<<"Tree Nai"<<endl;
        return;
    }
    queue<node *>q;
    q.push(root);
    while(!q.empty()){
        node* p = q.front();
        q.pop();

        cout<<p->val<<" ";

        if(p->left){
            q.push(p->left);
        }
        if(p->right){
            q.push(p->right);
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    node* root =  convert_arry_bst(a, n, 0, n-1);
    level_order(root);
    return 0;
}