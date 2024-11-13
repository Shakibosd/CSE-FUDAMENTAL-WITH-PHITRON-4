/*Problem Statement

There is a list of  values that were inserted into a stack and a list of  values that were inserted into a queue. You need to determine whether the stack and queue are the same or not based on the order in which the elements are removed.

Note: You cannot use any  here. You need to implement the stack and queue by yourself. You can use linked list or array as you want.

Input Format

First line will contain  and .
Second line will contain stack  with  values.
Third line will contain queue  with  values.
Constraints

Output Format

Output YES if they were same, otherwise NO.
Sample Input 0

5 5
10 20 30 40 50
50 40 30 20 10
Sample Output 0

YES
Sample Input 1

4 4
10 20 30 40
10 20 30 40
Sample Output 1

NO
Sample Input 2

5 4
1 2 3 4 5
5 4 3 2
Sample Output 2

NO*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n >>m;
    int s[n];
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    int q[m];
    for(int i=0; i<m; i++){
        cin>>q[i];
    }
    stack<int>st;
    for(int i=0; i<n; i++){
        st.push(s[i]);
    }
    queue<int>qu;
    for(int i=0; i<n; i++){
        st.push(q[i]);
    }
    int flag = 1;
    while(!st.empty() && !st.empty()){
        if(st.top() != qu.front()){
            flag = 0;
            break;
        }
        st.pop();
        qu.pop();
    }
    int ans = st.empty() && qu.empty();
    if(ans == 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
