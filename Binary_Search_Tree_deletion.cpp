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



    void deletion(int key, node *temp)

    {
        cout<<"enter the function"<<endl;  //deletion case 1
        if(root==NULL)
        {
            cout<<"bst is empty"<<endl;
            return;

        }

        if(key<temp->data)
        {
            cout<<"less number side "<<endl;
            if(temp->left!=NULL)
            {
                if(temp->left->data==key)
                {
                    if(temp->left->left==NULL && temp->left->right==NULL)
                    {
                        node *temp1=temp->left;
                        delete temp1;
                        temp->left==NULL;
                        cout<<"node is deleted"<<endl;
                    }


                    else
                    {
                        cout<<"key is found but this not the leaf node "<<endl;
                        return;

                    }
                }


                deletion(key,temp->left);
                return;
            }
        }


        if(key>temp->data)   //deletion case1
        {

            cout<<"greater number side"<<endl;
            if(temp->right!=NULL)
            {
                if(temp->right->data==key)
                {
                    if(temp->right->left==NULL && temp->right->right==NULL)
                    {
                        node *temp1=temp->left;
                        delete temp1;
                        temp->right==NULL;
                        cout<<"node is deleted"<<endl;
                    }

                    else

                    {
                        cout<<"key is found but this not the leaf node "<<endl;
                        return;

                    }

                }

                deletion(key,temp->right);
                return;
            }
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
    obj.deletion(105,obj.root);


}
 