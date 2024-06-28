#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *next;
};

main()

{

struct node *head;
struct node *one = new node;
one->data=1;
struct node *two = new node;

one->next=two;
two->data=2;


head=one;

while(head!=NULL)
{
    cout<<head->data<<endl;
    head=head->next;
}








}