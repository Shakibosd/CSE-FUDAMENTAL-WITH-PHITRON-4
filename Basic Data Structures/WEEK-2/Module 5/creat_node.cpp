#include<bits/stdc++.h>
using namespace std;
class node{
public:
   int val;
   node* next; 
};
int main(){
    node a,b;

    a.val=106;
    b.val=203;

    a.next=&b;
    b.next=NULL;

    cout<<a.val<<endl;
    cout<<b.val<<endl;
    return 0;
}