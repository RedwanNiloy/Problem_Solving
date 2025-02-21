#include<iostream>
using namespace std;
struct Node{

    int data;
    Node* left;
    Node* right;
};

Node* root=NULL;

void delete_node(Node* root, int data)
{
   
if(root->left==NULL || root->right==NULL)
{
    delete(root);
    return;
}
else if(root->right==NULL)
{
    root=root->left;
    return;

}


}







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






insert_tree(5,root);
insert_tree(3,root);
insert_tree(6,root);
insert_tree(2,root);
insert_tree(4,root);
insert_tree(7,root);




if(bst_search(3,root)==1)
{
  cout<<"Found"<<endl;
  delete_node(root,3);
}
else{
  cout<<"Not Found"<<endl;
}


}