/*Given a string S
. Print S
 after replacing every sub-string that is equal to "EGYPT" with space.

Input
Only one line contains a string S
 (1≤|S|≤103)
 where |S| is the length of the string and it consists of only uppercase English letters.

Output
Print the result as required above.

Examples
input
BRITISHEGYPTGHANA
output
BRITISH GHANA
input
ITALYKOREAEGYPTEGYPTALGERIAEGYPTZ
output
ITALYKOREA  ALGERIA Z*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string t;
    cin>>t;
    while(t.find("EGYPT")!= -1){
        t.replace(t.find("EGYPT"),5," ");
    }
    cout<<t<<endl;
    return 0;
}