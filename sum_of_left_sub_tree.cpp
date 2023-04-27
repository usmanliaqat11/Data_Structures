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
     int sum=0;
   
 




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



    
    void sum_of_left_node(node *temp)
    {
        if(temp->left!=NULL)
        {
            sum=sum+temp->left->data;
            cout<<"sum of left nodes"<<sum<<endl;

            sum_of_left_node(temp->left);


        }


        if(temp->right!=NULL)
        {
            sum_of_left_node(temp->right);
            return;
        }
    }












};


int main()
{
    bst obj;
    obj.insertion(100,obj.root);
    obj.insertion(90,obj.root);
    obj.insertion(80,obj.root);
    // obj.insertion(120,obj.root);
    // obj.insertion(105,obj.root);
    // obj.insertion(98,obj.root);
    obj.sum_of_left_node(obj.root);


}
 
