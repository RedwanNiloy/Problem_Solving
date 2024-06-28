#include<iostream>

using namespace std;

int i=0;



void pm(string a,int fi)

{     
    
    if(fi==a.size()-1)
    {
        cout<<a<<endl;
        return;
    }
   



for(int i=fi;i<a.size();i++)
{
    swap(a[i],a[fi]);
    pm(a,fi+1);
    //swap(a[i],a[fi]);

}



}









int main()
{
string a;
cin>>a;
pm(a,0);
}