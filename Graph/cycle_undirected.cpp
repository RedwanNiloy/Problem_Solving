#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int adj[1000][1000];

int f=0;
int c=-1;
vector<int>v;

void dfs(int adj[1000][1000],int start,int vis[],int n,int par[])
{
        if(vis[start]==1)
        {   f=1;
            c=start;
           // cout<<"Cylce Detected"<<endl;
            return;
        }
        vis[start]=1;
       // cout<<start<<endl;
        v.push_back(start);
        for(int i =1;i<n;i++)
        {
            if(adj[start][i]==1 && par[start]!=i)
            {      par[i]=start;
                   dfs(adj,i,vis,n,par);
                  
            }
             
        }
        vis[start]=2;




      
}


main()
{
    int m,n;
    cin>>m>>n;
    //int adj[m][n];
    for(int i=0;i<n;i++)
    {
        int k,l;
        cin>>k>>l;
        adj[k][l]=1;
        //adj[l][k]=1;
    }
    int vis[m+1]={0};
    int par[m+1]={0};
    par[1]=-1;
    for(int i=1;i<m;i++)
    { if(vis[i]==0)
    {
    dfs(adj,i,vis,m+1,par);
    if(f==1)
    {
      break;
    }
    }
    }
    if(f==0)
    {
      cout<<"Cycle not detected"<<endl;
    }
    else{
      
     cout<<"Cycle Found"<<endl;
      int s=0;
      for(int i=0;i<v.size();i++)
      {
        
        if(v[i]==c || s==1) {
          s=1;
          cout<<v[i]<<endl; 
          
        }
        
      }
      
      
    }
}