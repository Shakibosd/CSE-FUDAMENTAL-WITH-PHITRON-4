// asymtotic Notation
// Big O Notation-> Worst Case
// Big Omega Notation-> Best Case
// Theta Notation-> Average Case
//https://docs.google.com/document/d/1_NpzAkDDivfeubMmERwBBk1Tq7YL--RjMMr7yNhwMrg/edit?fbclid=IwAR3Tl2cN69myFJPLT3LIjgDiJkIe4AOhOvDps16U5wuhu2T55szKz-QTXUg
// n==100; //O(logN)MCQ
//1. O(N + M) time, O(1) space

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 0, b = 0;
    int N,M;
    for(int i = 0; i < N; i++){
        a = a + rand();
    }
    for(int j = 0; j < M; j++){
        b = b + rand();
    }
    return 0;
}