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

    void search(int key,node *temp)

    {
        
        if(root==NULL)
        {
            cout<<"tree is empty "<<endl;
            return;
        }

        if(key==temp->data)
        {
            cout<<"key is found"<<key<<endl;
            return;
        }

       

        if(key>temp->data)
        {
            if(temp->right!=NULL)
            {
                search(key,temp->right);
            }
        
        }


         if(key<temp->data)
        {
            if(temp->left!=NULL)
            {
                search(key,temp->left);
            }
        }

         else
        {
            cout<<"key is not found"<<endl;
        }

        





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
    obj.search(105,obj.root);


}
