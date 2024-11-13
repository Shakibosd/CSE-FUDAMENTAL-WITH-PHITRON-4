/*Given a number N
 and a string S
 of size N
. Print S
 after sorting it.

Note : don't use built-in function and it's recommended to not solve this problem with python language.

Input
The first line contains a number N
 (1≤N≤107)
 size of string S
.

The second line contains a string S
 consists of lowercase English letters.

Output
Print S
 after sorting it.

Examples
input
4
deab
output
abde
input
5
egypt
output
egpty*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt[26]={0};
    for(int i=0; i<n; i++){
        char ch;
        cin>>ch;
        int val=ch-'a';
        cnt[val]++;
    }
    for(int i=0; i<26; i++){
        while(cnt[i]!=0){
           cout<<char(i+'a');
           cnt[i]--;
        }
    }
    return 0;
}