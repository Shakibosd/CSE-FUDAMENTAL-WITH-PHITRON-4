/*Given String S
. Determine if there is a Subsequence in S
 that is equal to "hello" or not.

Note: A subsequence is a sequence that can be derived from another sequence by deleting some elements without changing the order of the remaining elements.

For example: The list of all subsequence for the word "apple" would be "a", "ap", "al", "ae", "app", "apl", "ape", "ale", "appl", "appe", "aple", "apple", "p", "pp", "pl", "pe", "ppl", "ppe", "ple", "pple", "l", "le", "e".

Input
Only one line contains a string S
 (5≤|S|≤104)
 where |S| is the length of the string and it consists of lowercase English letters.

Output
Print "YES" if there exists an Subsequence equal to "hello" otherwise, print "NO".

Examples
inputCopy
ahhellllloou
outputCopy
YES
input
hlelo
output
NO*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string temp = "hello";
    int j=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==temp[j]){
            j++;
        }
    }
    if(j==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}