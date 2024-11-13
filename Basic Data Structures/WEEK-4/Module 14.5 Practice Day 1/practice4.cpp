/*Question: Take a queue of size N as input. You need to copy those elements in another queue in reverse order. You might use stack here. You should use STL to solve this problem. After copying in another queue, print the elements of that queue.

Sample Input
5
10 20 30 40 50
Sample Output
50 40 30 20 10*/

#include<bits/stdc++.h>
using namespace std;
void queue_revers(queue<int>q){
    stack<int> reverse_stk;
    while(!q.empty()){
        int x;
        cin>>x;
        x = q.front();
        reverse_stk.push(x);
        q.pop();
    }
    while(!reverse_stk.empty()){
        int x = reverse_stk.top();
        q.push(x);
        reverse_stk.pop();
    }
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
int main(){
    int n;
    cin >> n;
    queue<int> que;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        que.push(x);
    }
    queue_revers(que);
    return 0;
}