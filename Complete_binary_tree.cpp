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


    void foo(int data,node *temp)
    {
      int a;
      int b;
      
      if(temp->left!=NULL)
      {
        a=temp->left->data;
        foo(temp->data,temp->left);
        if(a<temp->data)
        {
          
          a=temp->left->data;
          b=temp->data;
          temp->data=a;
          a=b;
          temp->left->data=a;
          
          
        
        }
        
        
        
        if(temp->right!=NULL)
        {
          a=temp->right->data;
        foo(temp->data,temp->right);
        if(a<temp->data)
        {
          
          a=temp->right->data;
          b=temp->data;
          temp->data=a;
          a=b;
          temp->right->data=a;
          
        }
        return;
      }
    }

  }


    void print(node *temp)
{
     if(temp->left!=NULL)
      {
      print(temp->left); 
      }

      cout<<temp->data<<"  ";
      
      
      if(temp->right!=NULL)
      {
      print(temp->right); 
      return;
      }
}


void print_level_order(node *temp)
{
  for(int i=1; i<=h; i++)
  {
    print_current_level(root,i);
  }
}


void print_current_level(node *temp, int level)
{
  if(temp==NULL)
  {
    return;
  }

  if(level==1)
  {
    temp->check=1;
    min_heapify(root,temp);
  }

  print_current_level(temp->left,level-1);
  print_current_level(temp->right,level-1);
}


void min_heapify(node *temp,node *swap_node)
{
  if(temp->left!=NULL)
  {
    min_heapify(temp->left,swap_node);
  }

  if(temp->check!=1 and temp->data<swap_node->data)
  {
        int s = swap_node->info;
        swap_node->info = temp->info;
        temp->info = s;
  }

   if (temp->right != NULL) 
   {
        min_heapify(temp->right, swap_node);
          
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

      obj.print(obj.root);
}