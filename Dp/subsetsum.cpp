#include<bits/stdc++.h>
using namespace std;

int f=0;

bool subsetsum(vector<int>set,int k,int sum,int i)
{

if(i==set.size() || sum>k)
{
return 0;

}
if(sum==k)
{
    cout<<"Yes"<<endl;
    
    return 1;
}

if(subsetsum(set,k,sum+set[i],i+1))
{
    return 1;
}
if(subsetsum(set,k,sum,i+1)){
    return 1;
}

//return 0;
}







main()
{
    vector<int> set{3, 34, 4, 15, 6, 10};
    int k=30;
    int sum=0;
    bool c;

    c=subsetsum(set,k,sum,0);
    cout<<c<<endl;
    //cout<<p<<endl;






}