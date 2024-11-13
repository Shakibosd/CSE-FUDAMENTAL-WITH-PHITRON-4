
//O(N) + O(N) = O(N)
#include<bits/stdc++.h>
using namespace std;
class myQueue{
    public:
    list<int>l;
    void push(int val){//O(1)
        l.push_back(val);
    }
    void pop(){//O(1)
        l.pop_front();
    }
    int front(){//O(1)
        return l.front();
    }
    int size(){//O(1)
        return l.size();
    }
    bool empty(){//O(1)
        return l.empty();
    }
};
int main(){
    myQueue q;
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