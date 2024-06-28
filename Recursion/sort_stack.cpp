
#include<bits/stdc++.h>
using namespace std;



void insert(  stack<int> &s, int temp)
{
   if(s.empty()==1 || temp >= s.top())
   {
       s.push(temp);
       return;
   }
   else{
      
      int p= s.top();
      s.pop();
      insert(s,temp);
      s.push(p);
      return;

   }

}


void sort(stack<int> &s)
{      
   if(s.size()==1)
   {
    return;
   }

   int temp=s.top();
   s.pop();
   sort(s);
   insert(s,temp);


 

   
}

int main(){

stack<int>s;
s.push(10);
s.push(4);
s.push(3);
s.push(2);
s.push(7);
s.push(1);
s.push(6);
sort(s);

while(!s.empty())
{
    cout<<s.top()<<endl;;
    s.pop();
}



}