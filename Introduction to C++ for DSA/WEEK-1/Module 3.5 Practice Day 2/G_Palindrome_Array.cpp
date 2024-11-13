/*Given a number N
 and an array A
 of N
 numbers. Determine if it's palindrome or not.

Note:

An array is called palindrome if it reads the same backward and forward, for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.

Input
First line contains a number N
 (1≤N≤105)
 number of elements.

Second line contains N
 numbers (1≤Ai≤109)
.

Output
Print "YES" (without quotes) if A is a palindrome array, otherwise, print "NO" (without quotes).

Examples
input
5
1 3 2 3 1
output
YES
input
4
1 2 3 4
output
NO*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int flag=1;
    for(int i=0; i<n; i++){
        if(a[i] != a[n-i-1]){
            flag = 0;
            break;
        }
    }
    if(flag==1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}