/*Question: Take a stack of size N and a queue of size M as input. Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem.

Sample Input
5
10 20 30 40 50
5
10 20 30 40 50
Sample Output
NO
Sample Input
5
10 20 30 40 50
4
10 20 30 40
Sample Output
NO
Sample Input
5
10 20 30 40 50
5
50 40 30 20 10
Sample Output
YES*/

#include<bits/stdc++.h>
using namespace std;
int stk_que_same(stack<int>s, queue<int>q){
    while(!s.empty() && !q.empty()){
        if(s.top() != q.front()){
            return 0;
        }
        s.pop();
        q.pop();
    }
    return s.empty() && q.empty();
}
int main(){
    int n;
    cin>>n;
    stack<int>s;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        s.push(x);
    }
    int m;
    cin>>m;
    queue<int>q;
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        q.push(x);
    }
    int flag = stk_que_same(s,q);
    if(flag == 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}