/*Given a string S
. For each word in S
 reverse its letters then print it.

Note: words are separated by space.

Input
Only one line contains a strings S
 (1≤|S|≤106)
 where |S| is the length of the string and it consists of lowercase and uppercase English letters, spaces.

Output
Print the answer required above.

Examples
input
I love you
output
I evol uoy
input
You love me
output
uoY evol em
input
We are a happy family
output
eW era a yppah ylimaf*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    stringstream  ss(s);
    string word;
    int flag=1;
    while(ss>>word){
        reverse(word.begin(), word.end());
        if(flag==1){
            cout<<word;
            flag=0;
        }
        else if(flag==0){
            cout<<" "<<word;
        }
    }
    return 0;
}
