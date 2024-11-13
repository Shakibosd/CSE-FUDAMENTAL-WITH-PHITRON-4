/*Given a number N, and N numbers, find maximum number in these N numbers.

Input
First line contains a number N (1 ≤ N ≤ 103).

Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

Output
Print the maximum number.

Example
input
5
1 8 5 7 5
output
8*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n; 
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int mx=a[0];
    for(int i=0; i<n; i++){
        if(a[i]>mx){
            mx=a[i];
        }
    }
    cout<<mx<<endl;
    return 0;
}