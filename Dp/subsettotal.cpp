#include<bits/stdc++.h>
using namespace std;


int counts=0;

int total(vector<int>v,int n,int count,int sum)
{
    if(sum==0)
    {
        return 1;
    }
    if(n==0)
    {
        return 0;
    }
      return count=total(v,n-1,count,sum-v[n-1])+total(v,n-1,count,sum);
    


}







main()
{

vector<int>v{1,2,3,3};
int count=0;
int sum=6;

int h=total(v,4,count,sum);
cout<<h<<endl;








}