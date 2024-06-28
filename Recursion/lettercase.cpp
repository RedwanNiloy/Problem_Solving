#include<iostream>

using namespace std;

//int i=0;

void space_p(string a,string b)

{     
    
    if(a.size()==0)

    {  // cout<<"Hello"<<endl;
       cout<<b<<endl;

        return;
    }
    string op1,op2,c;
    c=b+a[0];
    b.push_back(toupper(a[0]));
    


   // b.push_back('_');
   
    
    a.erase(a.begin()+0);

    


    
    space_p(a,b);
    
    space_p(a,c);

    





}









int main()
{
string a,b;
cin>>a;
//cout<<a+"q"<<endl;
space_p(a,b);
}