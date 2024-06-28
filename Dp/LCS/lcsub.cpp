#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int t[1000][1000];

int lcs(string a,string b,int n,int m,int count)
{
    if(n==0||m==0)
    {
        return count;
    }

    

if(a[n-1]!=b[m-1])
{   count=0;
    return  max(lcs(a,b,n,m-1,count),lcs(a,b,n-1,m,count));
}

if(a[n-1]==b[m-1])
{   count++;
    return lcs(a,b,n-1,m-1,count);
}





}









main()
{
    string a,b;
    //cin>>a>>b;
    a="abcdxyz";
    b="xyzabcd";
    int n,m;
    n=a.size();
    m=b.size();
    
    //memset(t,-1,sizeof(t));
    cout<<lcs(a,b,a.size(),b.size(),0)<<endl;

}