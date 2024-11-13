/*Problem Statement

You will be given two strings S and X. You need to replace all X from string S with a '#' sign.

Input Format

First line will contain T, the number of test cases.
Next T lines will contain a line with S and X.
Constraints

1 <= T <= 1000
1 <= |S|, |X| <= 1000
|X| <= |S|
Output Format

For each test cases output the modified string S.
Sample Input 0

2
rahimisagoodguy good
canyoutellmewhereicanfindheriwillbegreatefultoyouifyoutellmetheanswer you
Sample Output 0

rahimisa#guy
can#tellmewhereicanfindheriwillbegreatefulto#if#tellmetheanswer*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        string s, x;
        cin>>s>>x;
        int pos=0;
        while((pos=s.find(x,pos))!=-1){
            s.replace(pos,x.size(),"#");
            pos++;
        }
        cout<<s<<endl;
    }
    return 0;
}
