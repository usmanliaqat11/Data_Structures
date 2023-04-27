#include<iostream>
using namespace std;


struct node{

    int data;
    node *left,*right;
};


class bst{

    public:
    node *root;
    node *temp;
     
    int j=0;
    int arr[5]={0,0,0,0,0};
 



    int leaf;
    int sum1=0;

    bst()
    {
        root=NULL;
    }


    void insertion(int key, node *temp)
    {
        if(root==NULL)
        {
            node *n=new node;
            n->data=key;
            n->left=NULL;
            n->right=NULL;
            root=n;
            return;
        }


        if(key==temp->data)
        {
            cout<<"number is already present"<<endl;
            return;
        }

        if(key>temp->data)
        {
            if(temp->right!=NULL)
            {
                insertion(key,temp->right);
            }
            else
            {
                node *n=new node;
                n->data=key;
                n->left=NULL;
                n->right=NULL;
                temp->right=n;
                return;

            }
        }


         if(key<temp->data)
        {
            if(temp->left!=NULL)
            {
                insertion(key,temp->left);
            }
            else
            {
                node *n=new node;
                n->data=key;
                n->left=NULL;
                n->right=NULL;
                temp->left=n;
                return;

            }
        }
    }



    node* in_order_traversal(int key,node *temp)

    {
        

        if(root==NULL)
        {
            cout<<"nothing is here for traversal"<<endl;
            return NULL;

        }


        if(temp->left!=NULL)
        {
            in_order_traversal(key,temp->left);
        }

        cout<<"tree data"<<temp->data<<endl;
        arr[j]=temp->data;
        j++;



        for(int i=0; i<5; i++)
        {
            cout<<"data of array"<<arr[i]<<endl;
        }

        if(temp->right!=NULL)
        {
            in_order_traversal(key,temp->right);
            return NULL;
        }



        for(int i=0; i<5; i++)
        {

        if(arr[i]==key)
        {
            cout<<"prdesesor of  "<<key <<"is"<<arr[i+1]<<endl;
            arr[i-1];
           node *temp;
           temp= search(arr[i-1], root);
           cout<<"adress of prdesesor "<<temp<<endl;
        }

        }

       return NULL;

    }


    node*  search(int key,node *temp)

    {
        
        if(root==NULL)
        {
            cout<<"tree is empty "<<endl;
            return NULL;
        }

        if(key==temp->data)
        {
          
            cout<<"key is found= "<<key<<endl;
            
            return temp;
            
        }

       

        if(key>temp->data)
        {
            if(temp->right!=NULL)
            {
                return search(key,temp->right);
            }
        
        }


         if(key<temp->data)
        {
            if(temp->left!=NULL)
            {
                return search(key,temp->left);
            }
        }

         return NULL;

    }










};


int main()
{
    bst obj;
    obj.insertion(100,obj.root);
    obj.insertion(110,obj.root);
    obj.insertion(120,obj.root);
    obj.insertion(105,obj.root);
    obj.insertion(98,obj.root);
    obj.in_order_traversal(105,obj.root);


}
 