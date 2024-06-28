#include<iostream>
#include<bits/stdc++.h>
using namespace std;




int lp(string a,int n,string b,int x)
{
    if(n==0||x==0)
    {
        return 0;
    }
    if(a[n-1]==b[x-1])
    {
        return 1+lp(a,n-1,b,x-1);
    }
    if(a[n-1]!=b[x-1])
    {
        return max(lp(a,n-1,b,x),lp(a,n,b,x-1));
    }

}












main()
{

string a="agbcba";
string b=a;
reverse(b.begin(),b.end());


cout<<lp(a,a.size(),b,b.size())<<endl;;










}