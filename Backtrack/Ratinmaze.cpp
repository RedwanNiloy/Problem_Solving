#include <bits/stdc++.h>
using namespace std;

vector<string>v;


void path(string x,int i,int j,vector<vector<int>> &m,int n)
    
    {   
        
        if(i>n || j>n)
        {   
            
            return;
        }
        if(i<0 || j<0)
        {
            return;
        }
        if(i==n && j==n)
        {   
            v.push_back(x);
            return;
        }
        if(m[i][j]==0 || m[i][j]==2)
        {
            return;
        }
        
        m[i][j]=2;
        path(x+"D",i+1,j,m,n);
        path(x+"U",i-1,j,m,n);
        path(x+"R",i,j+1,m,n);
        path(x+"L",i,j-1,m,n);
        m[i][j]=1;
        
    }
    
    
    void findPath(vector<vector<int>> &m, int n) {
        
         
         path(" ",0,0,m,n-1);
         
        
        
        
    }

int main() 
{ 
 int   n= 4;
vector<vector<int>> m  = 
         {{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}};
         findPath(m,n);
         
         for(auto i:v)
         {
           cout<<i<<endl;
         }
         
         
   
}