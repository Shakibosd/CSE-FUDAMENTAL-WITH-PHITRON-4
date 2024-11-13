// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int * a = new int[5];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     for(int i=0; i<n; i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *a = new int;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}