#include <iostream>
#include<math.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
    int check;

};

class cbt{

    public:
    int h;
    int count;
    int x;

    node *root;
    
    cbt()
    {
      x=0;
        h=0;
        count=0;
        root=NULL;

    }

    
    void insertion(int lh,int key, node *temp)
    {


       
          if(root==NULL)
        {
            node *n=new node;
            n->data=key;
            n->left=NULL;
            n->right=NULL;
            root=n;
            count++;
            return;
        }

        if(count==pow(2,h+1)-1)
        { 
          
          if(temp->left!=NULL)
          {
            insertion(lh+1,key,temp=temp->left);
            return;

          }
          
        
            h++;
            node *n=new node;
            n->data=key;
            temp->left=n;
            n->left=NULL;
            n->right=NULL;
            count++;
    
            return;

        }

        if(temp->left!=NULL and temp->right==NULL)
        {
          
          if(x==key)
          {
            return;
          }
           x=key;
            node *n=new node;
            n->data=key;
            temp->right=n;
            n->left=NULL;
            n->right=NULL;
            count++;


            return;

        }

    
      
        if(temp->left==NULL and temp->right==NULL and lh<h)
        {

            if(x==key)
            {
                return;
            }
            //cout<<"temp data"<<temp->data;
            x=key;
            node *n=new node;
            n->data=key;
            temp->left=n;
            n->left=NULL;
            n->right=NULL;
            count++;
            return;

        }


        if(temp->left!=NULL)
      {
      insertion(lh+1,key,temp->left); 
      }
      

      if(temp->right!=NULL)
      {
      insertion(lh+1,key,temp->right); 
      return;
      }


    }


   


//     void print(node *temp)
// {
//      if(temp->left!=NULL)
//       {
//       print(temp->left); 
//       }

//       cout<<temp->data<<"  ";
      
      
//       if(temp->right!=NULL)
//       {
//       print(temp->right); 
//       return;
//       }
// }


void print_level_order(node *temp)
{
  for(int i=0; i<=h; i++)
  {
    print_current_level(root,i);
    cout<<"i"<<i<<endl;
  }
}


void print_current_level(node *temp, int level)
{
    if(temp==NULL)
    {
        return;
    }

    if(level==0)
    {
        cout<<"temp->data "<<temp->data<<endl;
    }

    print_current_level(temp->left,level-1);
    print_current_level(temp->right,level-1);
}





   
};

int main()
{  
    
      cbt obj;
      obj.insertion(0,60,obj.root);
      obj.insertion(0,50,obj.root);
      obj.insertion(0,30,obj.root);
      obj.insertion(0,20,obj.root);
      obj.insertion(0,80,obj.root);
      obj.insertion(0,90,obj.root);
      obj.insertion(0,300,obj.root);
      obj.insertion(0,400,obj.root);
      obj.insertion(0,500,obj.root);

      obj.print_level_order(obj.root);
}