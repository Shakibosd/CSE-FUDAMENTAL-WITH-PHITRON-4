#include <bits/stdc++.h>
using namespace std;
class myStack{
public:
    vector<int> v;
    void push(int val){ // O(1)
        v.push_back(val);
    }
    void pop(){ // O(1)
        v.pop_back();
    }
    int top(){ // O(1)
        return v.back();
    }
    int size(){ // O(1)
        return v.size();
    }
    bool empty(){ // O(1)
        // if (v.size() == 0){
        //     return true;
        // }
        // else{
        //     return false;
        // }
        return v.empty();
    }
};
int main(){
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){ // O(N)
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty()){ // O(N)
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// class myStack{
// public:
//     vector<float> v;
//     void push(float val){ 
//         v.push_back(val);
//     }
//     void pop(){ 
//         v.pop_back();
//     }
//     float top(){ 
//         return v.back();
//     }
//     float size(){ 
//         return v.size();
//     }
//     bool empty(){ 
//         return v.empty();
//     }
// };
// int main(){
//     myStack st;
//     float n, i;
//     cin >> n;
//     for (i = 0; i < n; i++){ 
//         float x;
//         cin >> x;
//         st.push(x);
//     }
//     while (!st.empty()){ 
//         cout << st.top() << endl;
//         st.pop();
//     }
//     return 0;
// }
