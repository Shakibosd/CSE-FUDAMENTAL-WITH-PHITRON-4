#include<bits/stdc++.h>
using namespace std;
class frq{
public:
    char value;
    int cnt;
};
bool cmp(frq a, frq b){
    if(a.cnt == b.cnt){
        return a.value < b.value;
    }
    else{
        return a.cnt > b.cnt;
    }
}
int main(){
    string s;
    cin>>s;
    frq f[26];
    for(int i=0; i<26; i++){
        f[i].value=char(i+'a');
        f[i].cnt=0;
    }
    for(char c:s){
        int ascii=int(c-'a');
        f[ascii].cnt++;
    }
    sort(f,f+26,cmp);
    for(int i=0; i<26; i++){
        if(f[i].cnt>0){
            for(int j=0; j<f[i].cnt; j++){
                cout<<f[i].value;
            }
        }
    }
    return 0;
}