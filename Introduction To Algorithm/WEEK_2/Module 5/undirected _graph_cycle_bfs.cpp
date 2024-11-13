/*
8 7
0 1
1 2
3 4
4 5
5 6
6 3
7 8
*/


#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>v[N];
int vis[N];
int pAr[N];
int flag;

void bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src]=1;
    while(!q.empty()){
        int p=q.front();
        q.pop();
        for(int child:v[p]){
            if(vis[child]==1 && pAr[p] != child){
                flag=1;
            }
            if(vis[child]==0){
                vis[child]=1;
                pAr[child]=p;
                q.push(child);
            }
        }
    }
}

int main(){
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(vis,0,sizeof(vis));
    memset(pAr,-1,sizeof(pAr));

    for(int i=0;i<n;i++){
        if(vis[i]==0){
            bfs(i);
        }
    }
    if(flag==1){
        cout<<"Cycle Found"<<endl;
    }
    else{
        cout<<"NO Cycle"<<endl;
    }
    return 0;
}