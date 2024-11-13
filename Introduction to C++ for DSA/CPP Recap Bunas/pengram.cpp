#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int arr[26] = {0};
    for(int i=0; i<s.size(); i++){
        arr[s[i] - 'a']++;
    }
    int flag = 1;
    for(int i = 0; i < 26; i++){
        if(arr[i] == 0){
            flag = 0;
            break;
        }
    }
    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}