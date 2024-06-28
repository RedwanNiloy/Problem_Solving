#include<iostream>

using namespace std;



struct Node{
    int data;
    Node* right;
    Node* left;
};
Node *root=NULL;

Node* make_node(int k)
{
   Node* node = new Node();
  node->data=k;
  node->right=NULL;
  node->left=NULL; 

  return node;
}


void insert_tree(int k,Node* jroot)
{
  Node* node;
  
  node=make_node(k);


  if(jroot==NULL){
    root=node;
    cout<<root<<endl;
  }
  else{
    Node* koot;
    //Node* p;
    koot=jroot;
    while(1)
    {   //p=koot;
        if(k>(koot->data)){
            if(koot->right==NULL){
            koot->right=node;
            break;
            
            }
            else{
                koot=koot->right;
            }
            

        }
        else if(k<=koot->data) {
            if(koot->left==NULL){
                koot->left=node;
                break;
        
            }
            else{
                koot=koot->left;
            }
        }
    }
    
    
  }

  
  


  
}



void searc(int k, Node* joot){
    Node* koot;
    koot=joot;
    while(1){
        if(koot==NULL)
        {
            cout<<"NOT FOUND"<<endl;
            break;
        }
        else if (koot->data==k ){
            cout<<"Found"<<endl;
            break;
        }
        else if(koot->data<k){
            koot=koot->right;
            

        }
        else if(koot->data>=k)
        {
      koot=koot->left;
        }
         

    }

}


 main()
{
   
   int a[6]={2,4,5,1,4,9};
   
   for(int i=0;i<6;i++){
    insert_tree(a[i],root);
      

   } 

cout<<root<<endl;
searc(2,root);








}

   