#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int adj[1000][1000];

void bfs(int start,queue<int>q,int n,int vis[])
{
    q.push(start);
    
    while(!q.empty())
    
    {   int e=q.front();
    
        cout<<e<<endl;
        vis[e]=1;
        //cout<<q.size()<<endl;
        for(int i=0;i<n;i++)
        {   
            if(adj[e][i]==1 && vis[i]==0)
            {   //cout<<e<<" "<<i<<endl;
           // cout<<i<<endl;
                q.push(i);
            }
        }
        q.pop();
    }

}




main()
{
    int m,n;
    cin>>n>>m;
    //int adj[m][n];
    for(int i=0;i<m;i++)
    {
        int k,l;
        cin>>k>>l;
        adj[k][l]=1;
        adj[l][k]=1;
    }
    int vis[n]={0};
    queue<int>q;

    
   bfs(0,q,n,vis);
   //cout<<adj[3][7]<<endl;
    

}