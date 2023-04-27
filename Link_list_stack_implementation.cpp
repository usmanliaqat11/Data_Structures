#include<iostream>
using namespace std;

struct node{
    
    int data;
    node *next;


};


class stack{

    public:
    node *head=NULL;

    void push(int val)
    {
      if(head==NULL)
      {
          node *n=new node;
          n->data=val;
          n->next=head;
          head=n;
          return;

      }

      else
      {
          node *n=new node;
          n->data=val;
          n->next=head;
          head=n;

      }


    }

    int pop()
    {
        node *curr;
        curr=head;
       
         

        int val;
        val=head->data;
       
        head=curr->next;
        curr->next=NULL;
       
        delete curr;
        return val;

    }



    void print()
    {
        node *curr;
        curr=head;
        


        while(curr->next!=NULL)
        {
            
            curr=head;
           cout<<curr->data<<endl;

           
            pop();
         


        }
         

    }

};





int main()
{
    stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    // cout<<s1.pop()<<endl;
    // cout<<s1.pop()<<endl;
    // cout<<s1.pop()<<endl;
    // cout<<s1.pop()<<endl;
    s1.print();
   // cout<<s1.pop()<<endl;

}


