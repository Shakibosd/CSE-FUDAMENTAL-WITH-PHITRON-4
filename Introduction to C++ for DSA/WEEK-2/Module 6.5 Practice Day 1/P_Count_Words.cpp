/*Given a string S. Print number of words in it.

Word : consists of lowercase and uppercase English letters.

Input
Only one line contains S
 (1≤|S|≤106)
 where |S| is the length of the string and it consists of lowercase and uppercase English letters, spaces and ('!', '.', '?' and ',') symbols.

Output
Print the number of words in the given string.

Examples
input
Meep Meep!
output
2
input
I tot I taw a putty tat.
output
7
input
I did! I did! I did taw a putty tat.
output
10
input
Shsssssssssh ... I am hunting wabbits. Heh Heh Heh Heh ...
output
9*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int flag=0;
    int cnt=0;
    for(char c:s){
        if(isalpha(c)){
            if(flag==0){
                cnt++;
            }
            flag=1;
        }
        else{
            flag=0;
        }
    }
    cout<<cnt<<endl;
    return 0;
}