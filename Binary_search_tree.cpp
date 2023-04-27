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

    bst()
    {
        root=NULL;
        temp=NULL;
    }

    void insertion(int key,node *temp )
    {
        if(temp==NULL)
        {
            temp=new node;
            temp->info=key;
            temp->left=NULL;
            temp->right=NULL;
            return;






        }

        if(key==temp->info)
        {
            cout<<"dulicate is not allowed"<<endl;
        }

        if(key>temp->info)
        {
            insert(key,temp->right);
            return;
        }

         if(key<temp->info)
        {
            insert(key,temp->left);
            return;
        }

    }


};

int main()
{
    bst obj;
    obj.insertion(obj.root);
    cout<<"enter number"<<endl;
    cin>>obj.number;

}



