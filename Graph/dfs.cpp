#include<iostream>
using namespace std;
int adj[1000][1000];



void dfs(int adj[1000][1000],int start,int vis[],int n)
{
       
        vis[start]=1;
        cout<<start<<endl;
        for(int i =0;i<n;i++)
        {
            if(adj[start][i]==1)
            {
                   dfs(adj,i,vis,n);
            }
        }


      
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
        adj[l][k]=1;
    }
    int vis[m]={0};
    for(int i=0;i<m;i++)
    { if(vis[i]==0)
    {
    dfs(adj,i,vis,m);
    }
    }

}