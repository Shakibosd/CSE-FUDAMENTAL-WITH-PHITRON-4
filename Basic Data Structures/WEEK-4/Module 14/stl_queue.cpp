
//O(N) + O(N) = O(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){//O(N)
        int x;
        cin>>x;
        q.push(x);
    }
    while(!q.empty()){//O(N)
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}




// //O(N) + O(N) = O(N)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     queue<float>q;
//     float n;
//     cin>>n;
//     for(float i=0; i<n; i++){//O(N)
//         float x;
//         cin>>x;
//         q.push(x);
//     }
//     while(!q.empty()){//O(N)
//         cout<<q.front()<<endl;
//         q.pop();
//     }
//     return 0;
// }



