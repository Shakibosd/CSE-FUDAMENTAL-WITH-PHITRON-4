/*Given a number N
 and a string S
 of size N
. Determine the maximum possible size of the sub-sequence T
 derived from S
 such that no two adjacent characters in T
 are the same.

Note: A subsequence is a sequence that can be derived from another sequence by deleting some elements without changing the order of the remaining elements.

For example: The list of all subsequence for the word "apple" would be "a", "ap", "al", "ae", "app", "apl", "ape", "ale", "appl", "appe", "aple", "apple", "p", "pp", "pl", "pe", "ppl", "ppe", "ple", "pple", "l", "le", "e".

Input
The first line contains a number N
 (1≤N≤105)
 denoting the size of the string.

The second line contains a string S
 consists of lowercase English letters.

Output
Print a single line containing one number that represents the maximum size of the subsequence that satisfies the provided condition.

Examples
input
5
ababb
output
4
input
5
aaaac
output
2
Note
Test 1 : all subsequence strings such that no two adjacent characters in it is the same.

a
b
ab
aba
abab
bab
ba
so the greatest one is "abab" and its size 4 so the answer is 4.*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0; i<n; i++){
        if(s[i] == s[i+1]){
            cnt++;
        }
    }
    int res = n - cnt;
    cout<<res<<endl;
    return 0;
}