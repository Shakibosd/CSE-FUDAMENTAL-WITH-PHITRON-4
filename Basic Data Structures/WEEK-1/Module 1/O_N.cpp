//O(N) + O(N) = O(N+N) = O(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){//O(N)
        cin>>a[i];
    }
    int s=0;
    for(int i=0; i<n; i++){//O(N)
        if(i%2==0){//even index sum
            s+=a[i];
        }
    }
    cout<<s<<endl;
    return 0;
}