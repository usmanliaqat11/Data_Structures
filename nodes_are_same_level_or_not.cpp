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

    int first_depth=0;
    int current_depth=0;


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

   void same_leval(int current_depth, node *temp)
   {

       cout<<"enter in the function"<<endl;
       if(temp==NULL)
       {
           cout<<"bst is empty"<<endl;
       }


       if(temp->left!=NULL)

       
       {
           cout<<"left side tree"<<endl;
           same_leval(current_depth+1, temp->left);
          

          
       }


        if(temp->left==NULL && temp->right==NULL)
           {
               if(first_depth==0)
               {
                   first_depth=current_depth;
                   cout<<"this is first depth"<<first_depth<<endl;
               }

               if(first_depth!=current_depth)
               {
                   cout<<"nodes are not same level"<<endl;
               }

               if(first_depth==current_depth)
               {
                    cout<<"this is same level"<<endl;
               }

              
           }

       if(temp->right!=NULL)
       {
           cout<<"right side tree"<<endl;
          

         




           if(temp->left==NULL && temp->right==NULL)
           {

               if(first_depth!=current_depth)
               {
                   cout<<"level are not same "<<endl;
                   return;
               }

               if(first_depth==current_depth)
               {
                   cout<<"nodes are at same lavel"<<endl;
               }
           }


        same_leval(current_depth+1,temp->right);
        return;


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
    obj.insertion(96,obj.root);
    obj.insertion(93,obj.root);
    obj.insertion(104,obj.root);
    obj.insertion(130,obj.root);

    obj.same_leval(obj.current_depth,obj.root);


}
