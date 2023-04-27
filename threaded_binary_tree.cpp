#include<iostream>
using namespace std;


struct node{

    int data;
    node *left,*right;
    int left_thread;
    int right_thread;
};


class thread_binary{

    public:
    node *root;
    node *temp;
    node *dummy;
     
   
 




    thread_binary()
    {

        dummy=new node;
        dummy->right=dummy;
        dummy->left=dummy;
        dummy=temp;
        root=NULL;



        
    }


    void insertion(int key, node *temp)
    {
        if(root==NULL)
        {
            node *n=new node;
            dummy->left=root;
            n->left=dummy;
            n->right=dummy;
            n->data=key;
            n->left_thread=0;
            n->right_thread=0;
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
            if(temp->right_thread==0)
            {
                node *n=new node;
                n->right=temp->right;
                temp->right=n;
                n->right_thread=temp->right_thread;
                temp->right_thread=1;
                n->left=temp;  
            }

            else
            {
                insertion(key,temp->right);
            }
        }


         if(key<temp->data)
        {
            if(temp->left_thread==0)
            {
                node *n=new node;
                n->left=temp->left;
                temp->left=n;
                n->left_thread=temp->left_thread;
                temp->left_thread=1;
                n->right=temp;
            }


            else
            {
                insertion(key,temp->left);

            }
        }
    }
    

    void deletion(int key,node *temp)
    {
        if(temp==root)  //case1
        {
            if(root->data==key)
            {
                if(root->left_thread==0 && root->right_thread==0)
                {
                    delete root;
                    root=NULL;
                    dummy->left=dummy;
                    dummy->left_thread=0;
                    return;
                }
            }
        }

        if(root->left_thread==1) //case2
        {
            root->left->right=root->right;
            root->left->right_thread=root->right_thread;
            dummy->left=root->left;
            root=root->left;
            delete temp;
            return;
        }

        //case3

    }


};


int main()
{
     thread_binary obj;
     obj.insertion(20,obj.root);
     obj.insertion(25,obj.root);
     obj.insertion(30,obj.root);

}