#include<bits/stdc++.h>
using namespace std;

int x=0;
int y=0;

int lis(vector<int>&v,int n,int i,int p)
{
    if(i==n)
    {
        return 0;
    }

   // y=0+lis(v,n,i+1,p);
    
    if(  p==-1 || v[i]>v[p])
    {
        return  max (1+lis(v,n,i+1,i),lis(v,n,i+1,p));
    }
    else{
        return lis(v,n,i+1,p);
    }

    //return max(x,y);
}








main()

{
    vector<int>v={10, 22, 9, 33, 21, 50, 41, 60 }; 
    cout<<lis(v,v.size(),0,-1)<<endl;
    

}