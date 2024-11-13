/*Question: Take a stack of size N as input and copy those elements to another stack to get the values in the order they were inserted and print them. You should use STL to solve this problem.

Sample Input
5
10 20 30 40 50
Sample Output
10 20 30 40 50*/

#include<bits/stdc++.h>
using namespace std;
void stack_copy_print(stack<int>s){
    stack<int>copy_stk;
    while(!s.empty()){
        int x;
        cin>>x;
        x = s.top();
        copy_stk.push(x);
        s.pop();
    }
    while(!copy_stk.empty()){
        cout<<copy_stk.top()<<" ";
        copy_stk.pop();
    }
}
int main(){
    int n;
    cin>>n;
    stack<int>st;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        st.push(x);
    }
    stack_copy_print(st);
    return 0;
}