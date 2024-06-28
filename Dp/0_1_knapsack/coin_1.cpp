#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int t[1000][1000];

int coinmin(vector<int>v,int n,int s)
{
    if(n==0||s==0)
    {
        return 0;
    }

    

if(v[n-1]<=s)
{   
    return  coinmin(v,n,s-v[n-1])+coinmin(v,n-1,s);
}

else
{   
    return coinmin(v,n-1,s);
}





}









main()
{
    vector<int>v{10,5,25,30};
    //memset(t,-1,sizeof(t));
    int s=30;
    cout<<coinmin(v,v.size(),s)<<endl;

}