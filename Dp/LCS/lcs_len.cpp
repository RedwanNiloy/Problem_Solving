#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int t[1000][1000];

int lcs(string a,string b,int n,int m)
{
    if(n==0||m==0)
    {
        return t[n][m]=0;
    }

    if(t[n][m]!=-1)
    {
        return t[n][m];
    }

if(a[n-1]!=b[m-1])
{
    return t[n][m]= max(lcs(a,b,n,m-1),lcs(a,b,n-1,m));
}

if(a[n-1]==b[m-1])
{
    return t[n][m]=1+lcs(a,b,n-1,m-1);
}





}









main()
{
    string a,b;
    //cin>>a>>b;
    a="AGGTAB";
    b="GXTXAYB";
    int n,m;
    n=a.size();
    m=b.size();
    
    memset(t,-1,sizeof(t));
    cout<<lcs(a,b,a.size(),b.size())<<endl;

}