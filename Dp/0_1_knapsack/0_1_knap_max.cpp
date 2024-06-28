#include<bits/stdc++.h>
using namespace std;



int knapsack(vector<int> wt,vector<int>val,int i,int w,int ww,int pp)
{
if(i==wt.size())
{
    return pp;
}

int w1=wt[i];
int p1=val[i];
if(w1+ww>w)
{
   return knapsack(wt,val,i+1,w,ww,pp) ;
}

return max(knapsack(wt,val,i+1,w,ww+w1,pp+p1),knapsack(wt,val,i+1,w,ww,pp));



}







main()
{
    vector<int> wt{4,5,1};
    vector<int> val{1,2,3};
    int w=3;
    int p;
    p=knapsack(wt,val,0,w,0,0);
    cout<<p<<endl;






}