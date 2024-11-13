/*
Problem Statement:
Amena has just learned alphabets She can read write from a to z only in lowercase But Amena always writes in alphabetic order (alphabetic order means from a to z in sorted order) what she saw Also she writes a line as a word For example she writes monkey as ekmnoy Her mother wants to test her reading and writing skills Her mother gave her some lines can you tell what she will write

Note: Input will be given by EOF.Sort by character count and print

Input Format:
Input consist of a line S The line will contain lowercase letters and spaces It is possible that there are multiple spaces together and the line end with spaces

Constraints:
1 <= |S| <= 10^5

Output Format:
Output what Amena will write

Sample Input 0
monkey
i love flower

Sample Output 0
ekmnoy
eefilloorvw*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 1000001;
    char a[n];
    while(cin.getline(a, n)){
        sort(a, a + strlen(a));
        for(int i=0; a[i]!='\0'; i++){
            if(a[i] == ' '){
                continue;
            }
            cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}


