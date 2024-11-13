#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    switch(n%2){
        case 0:
            cout<<"Even\n";
            break;
        case 1:
            cout<<"Odd\n";    
    }
    return 0;
}