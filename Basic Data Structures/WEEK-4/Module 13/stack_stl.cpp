
#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){ // O(N)
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty()){ // O(N)
        cout << st.top();
        st.pop();
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     stack<float> st;
//     float n;
//     cin >> n;
//     for (float i = 0; i < n; i++){ // O(N)
//         float x;
//         cin >> x;
//         st.push(x);
//     }
//     while (!st.empty()){ // O(N)
//         cout << st.top()<<endl;
//         st.pop();
//     }
//     return 0;
// }

