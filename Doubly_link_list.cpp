#include<iostream>
using namespace std;

struct node{

    int data;
    node *next;
    node *prev;

};

class list{

    
    public:
    node *head=NULL;
    node *temp;
    int len=0;

    void insertion(int value, int pos)
    {
        
        
        if(head==NULL)
        {
            cout<<"first if condition"<<endl;
            node *n=new node;
            n->data=value;
            n->next=head;   
            n->prev=NULL;
            head=n;
            temp=head;
            len++;
        }        


        if(pos>=len)
        {
           cout<<"second if condition"<<endl;
           
           node *n=new node;
           n->data=value;
           temp->next=n;
           n->next=NULL;
           temp->next->prev=temp;
           len++;
           temp=temp->next;
           
        }

        


    }

    void insertion_on_head(int value)
    {

        if(head->prev==NULL)
        {
            node *n=new node;
            n->data=value;
            n->next=head;
            head->prev=n;
            head=n;
            n->prev=NULL;
            len++;


        }
    }

    void insertion_on_end(int value)
    {
        node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;

        }
        if(temp->next==NULL)
        {
            node *n=new node;
            n->data=value;
            temp->next=n;
            n->prev=temp;
            n->next=NULL;
            len++;
        }
    }

    void deletion(int value)
    {
        node *temp=head;
        while(temp->next!=NULL)
        {
            if(temp->data==value)
            {
                temp->prev->next=temp->next;
                temp->next->prev=temp->prev->next;
                temp->prev=NULL;
                temp->next=NULL;
                delete temp; 
                len--;
                break;

            }
            temp=temp->next;

        }

    }





    void print()
    {
        node *temp;
        temp=head;

        while(temp->next!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;

            if(temp->next==NULL)
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
    obj.insertion(1,0);
    obj.insertion(2,1);
    obj.insertion(3,2);
    obj.insertion(4,3);     
    obj.insertion_on_head(10);
    obj.insertion_on_head(20);
    obj.insertion_on_head(30);
    obj.insertion_on_end(100);
    obj.insertion_on_end(200);
    obj.deletion(10);
    obj.deletion(3);
    obj.print();
}

