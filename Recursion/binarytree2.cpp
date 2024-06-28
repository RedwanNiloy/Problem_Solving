#include<iostream>
using namespace std;
struct Node{

    int data;
    Node* left;
    Node* right;
};

Node* root=NULL;

Node* make_node(int data)
{

    Node* child= new Node();
       child->left=NULL;
       child->right=NULL;
       child->data=data;
      

       return child ;
           
     
}

void insert_tree(int data, Node* rootnode)
{
    Node* point=root;
    if(rootnode==NULL)
    {
        root= make_node(data);

        


    }
    else{

        while(1)
        {
          
              if(point->data < data)
          {  
                if(point->right==NULL)
                {
                point->right=make_node(data);
                break;

                }
                else{
                  point=point->right;
                }
               
          }

          else if(point->data >= data)
          {
            if(point->left==NULL)
                {
                point->left=make_node(data);
                break;

                }
                else{
                  point=point->left;
                }
          }

        }
          


    }

}
bool bst_search(int data,Node* root)
{

  if(root==NULL)
  {
    return 0;
  }
  if(root->data == data)
  {
    return 1;

  }
  else if(root->data >= data){
      return bst_search(data,root->left);

  }
  else{
         return bst_search(data,root->right);
   
  }
}


int main(){



 int a[6]={2,4,5,1,4,9};
   
   for(int i=0;i<6;i++){
    insert_tree(a[i],root);
      

   } 




if(bst_search(4,root)==1)
{
  cout<<"Found"<<endl;
}
else{
  cout<<"Not Found"<<endl;
}


}