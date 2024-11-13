#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, ans=-1;
        cin>>n;
        vector<int>a(n);
        for(int &x:a){
            cin>>x;
        }
        for(int i=0; i<n; i++){
            int l=0, r=0;
            for(int j=i-1; j>=0; j--){
                l+=a[j];
            }
            for(int j=i+1; j<n; j++){
                r+=a[j];
            }
            if(l==r){
                ans=i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
