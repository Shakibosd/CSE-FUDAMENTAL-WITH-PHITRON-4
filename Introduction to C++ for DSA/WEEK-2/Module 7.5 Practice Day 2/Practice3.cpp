/*Question: Take a sentence S as input and then take another string word X as input. Then count how many times the word X appeared in the sentence. The words in the sentence are separated by spaces.

Sample Input
Sample Output
Sanju Samson shamanta samson jessica Bhatta Asif John takla john abraham john baby Shark tank 
john
2*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int cnt=0;
    while(ss>>word){
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}