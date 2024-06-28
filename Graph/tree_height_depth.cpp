#include<iostream>
using namespace std;
int adj[1000][1000];
int m=-1e9;


void dfs(int start,int h,int vis[],int node)
{     m=max(m,h);
      
        vis[start]=1;
        cout<<start<<endl;
        for(int i=0;i<node;i++)
        {
            if(adj[start][i]==1 && vis[i]==0)
            { 
                
                dfs(i,h+1,vis,node);
                   
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
    
    dfs(1,0,vis,n);
    cout<<m<<endl;
    

}