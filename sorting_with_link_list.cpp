#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class list{

    public:

    node *head=NULL;
    node *temp=NULL;
    int len=0;

    void insertion(int value, int pos)
    {
        int x;
        x=pos;

        if(head==NULL)
        {
            node *n=new node;
            n->data=value;
            n->next=head;
            head=n;
            temp=head;
            len++;
            
        }

        if(pos>=len)
        {
            node *n=new node;
            n->data=value;
            temp->next=n;
            n->next=NULL;
            len++;
            temp=temp->next;

        }

      

    }

    void sorting()
    {
        temp=head;
        node *temp1;
      
        
    while(temp->next!=NULL)
    {
          temp1=temp->next;
         if(temp1->next==NULL)
         {
             if(temp->data>temp1->data)
             {
                 int x;
                 x=temp1->data;
                 temp1->data=temp->data;
                 temp->data=x;
                 break;
             }
        }

        while(temp1->next!=NULL)
        {
             if(temp->data>temp1->data)
             {
                 int x;
                 x=temp1->data;
                 temp1->data=temp->data;
                 temp->data=x;
             }

             temp1=temp1->next;

             if(temp1->next==NULL)
             {
                  if(temp->data>temp1->data)
                {
                 int x;
                 x=temp1->data;
                 temp1->data=temp->data;
                 temp->data=x;
                }

                else
                {
                    break;
                }
             }

        }


    temp=temp->next;

        
    }
}



    void print()
    {
        temp=head;
        while(temp->next!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;

            if (temp->next==NULL)
            {
                cout<<temp->data<<endl;
                break;
            }
        }




    }


};


int main()
{
    list obj;
    obj.insertion(5,0);
    obj.insertion(1,1);
    obj.insertion(10,2);
    obj.insertion(2,3);
    obj.insertion(11,4);
    obj.insertion(3,5);
    obj.insertion(0,6);
    obj.insertion(-1,7);
    obj.insertion(30,8);
    obj.sorting();
    obj.print();
}

