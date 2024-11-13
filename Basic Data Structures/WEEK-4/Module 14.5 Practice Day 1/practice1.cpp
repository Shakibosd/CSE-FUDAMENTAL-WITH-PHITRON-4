/*Question: Take two stacks of size N and M as input and check if both of them are the same or not. Don’t use STL to solve this problem.

Sample Input
5
10 20 30 40 50
5
10 20 30 40 50
Sample Output
YES
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
NO*/

#include<bits/stdc++.h>
using namespace std;
int stackEqual(stack<int>s1, stack<int>s2){
    if(s1.size() != s2.size()){
        return 0;
    }
    while(!s1.empty()){
        if(s1.top() != s2.top()){
            return 0;
        }
        s1.pop();
        s2.pop();
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    stack<int>s1;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        s1.push(x);
    }
    int m;
    cin>>m;
    stack<int>s2;
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        s2.push(x);
    }
    int flag = stackEqual(s1, s2);
    if(flag == 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
