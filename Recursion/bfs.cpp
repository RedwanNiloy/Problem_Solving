#include<iostream>
#include<queue>
#include<vector>
using namespace std;


int aa[100][100];
int color[100];
queue<int>q;

void dfs(int v){
    color[v]=1;
    q.push(v);
    int x;
    x=q.front();
    q.pop();

    cout<<x<<endl;
    for(int i =0;i<100;i++)
    {   if(aa[v][i]==1 && color[i]==1){
        q.push(i);
        dfs(aa[v][i]);
    }
    }

    color[v]=2;

}



main()
{
    int n,e;
    cin>>n>>e;
    for(int i =0;i<e;i++)
    {
        int p,k;
        cin>>p>>k;
        aa[p][k]=1;
        aa[k][p]=1;
    }
    int v;
    dfs(v);

    

}