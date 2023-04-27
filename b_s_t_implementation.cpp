#include<iostream>
using namespace std;

struct node{

    int info;
    node *left, *right;

};


class bst{

    public:
    node *root;
    node *temp;

    int number;

    bst()
    {
        root=NULL;
        temp=NULL;
    }

    void insertion(node *temp )
    {
        if(root==NULL)
        {
            node *n=new node;
            n->info=number;
            n->left=NULL;
            n->right=NULL;
            root=temp;
            return;

        }

        if(temp->info==number)
        {
            cout<<"number is already is present"<<endl;
            return;
        }

        if(temp->info<number)
        {
            if(temp->right!=NULL)
            {
                insertion(temp->right);
                return;
            }
            else
            {
                temp->right=new node;
                temp->info=number;
                temp->right->left=NULL;
                temp->left->right=NULL;
                return;
            }
        }

        if(temp->info>number)
        {
            if(temp->left!=NULL)
            {
                insertion(temp->right);
                return;
            }
            else
            {
                temp->left=new node;
                temp->info=number;
                temp->left->right=NULL;
                temp->left->left=NULL;
                return;
            }
        }

        




    }


    node* search(int number , node *temp)
    {
        if(root==NULL)
        {
            cout<<"tree is empty"<<endl;
            return;

        }

        if(temp->info==number)
        {
           return temp;
        }

        if((temp->left!=NULL) && (number<temp->info))
        {
            return search(number,temp->left);


        }


        if((temp->right!=NULL) && (number>temp->info))
        {
            return search(number,temp->right);
            

        }

        if(temp->left==NULL && temp->right==NULL )
        {
            cout<<"value not found"<<endl;
        }
    }




};

int main()
{
    bst obj;
    obj.insertion(obj.root);
    cout<<"enter number"<<endl;
    cin>>obj.number;
     obj.insertion(obj.root);

     cout<<"enter number"<<endl;
    cin>>obj.number;
     obj.insertion(obj.root);

     cout<<"enter number"<<endl;
     cin>>obj.number;

     cout<<obj.search(0,obj.root)<<endl;


}



