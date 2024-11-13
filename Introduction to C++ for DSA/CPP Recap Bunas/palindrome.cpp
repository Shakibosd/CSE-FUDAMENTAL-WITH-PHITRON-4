#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;
        int flag = 1; 
        for(int i = 0, j = s.size() - 1; i < j; i++, j--){
            if(s[i] != s[j]){
                flag = 0; 
                break;
            }
        }
        if(flag == 1){
            cout << "YES" << endl;
		}
        else{
            cout << "NO" <<  endl;
		}
    }
    return 0;
}