#include<iostream>

using namespace std;

int i=0;

void space_p(string a,string b)

{     
    
    if(a.size()-1==0)

    {  // cout<<"Hello"<<endl;
        cout<<b+"C"<<endl;

        return;
    }
    string op1,op2,c;
    b.push_back(a[0]);
    c=b;
    b.push_back('_');
   
    
    a.erase(a.begin()+0);

    


    
    space_p(a,b);
    space_p(a,c);

    





}









int main()
{
string a,b;
cin>>a;
space_p(a,b);
}