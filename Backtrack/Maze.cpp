#include<bits/stdc++.h>
using namespace std;

vector<string>v;


int total_path(int a,int b,int c,int d)
{
    if(a==3||b==3)
    {
        return 1;
    }

    return total_path(a,b+1,c,d)+total_path(a+1,b,c,d);
}

void print_path(string x,int a,int b,int c,int d)
{ 
if(a==c && b==d)
{
    cout<<x<<endl;
    return;
}

else if(a==3 && b!=3)
{
    x=x+"R";
    print_path(x,a,b+1,c,d);
    return;
}
else if(b==3 && a!=3)
{
    x=x+"D";
    print_path(x,a+1,b,c,d);
    return;

}

/*
if(a<3)
{
 print_path(x,a,b+1,c,d);
}

if(b<3)
{
 print_path(x,a+1,b,c,d);
}

*/
print_path(x+"R",a,b+1,c,d);
print_path(x+"D",a+1,b,c,d);





}

/*
Four direction are here




*/

main()

{

int a,b,c,d;

a=1;
b=1;
c=3;
d=3;


cout<<"Total path to destination :"<<" "<<total_path(a,b,c,d)<<endl;
print_path(" ",a,b,c,d);

}