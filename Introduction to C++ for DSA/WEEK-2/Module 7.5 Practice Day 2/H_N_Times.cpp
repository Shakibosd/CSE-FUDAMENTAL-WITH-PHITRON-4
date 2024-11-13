/*Given a number N
 and a character C
. Print the character(C
) N
 times.

Note: Solve this problem using function.

Input
The first line contains a number T
 (1≤T≤50)
 the number of test cases.

Next T
 lines contains a number N
 and a character C
 (1≤N≤100)
.

Output
Print T
 lines, for every line print the character(C
) N
 times separated by space.

Examples
input
2
1 n
5 O
output
n 
O O O O O 
input
1
8 z
output
z z z z z z z z*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c;
        cin>>c;
        for(int i=0; i<n; i++){
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}