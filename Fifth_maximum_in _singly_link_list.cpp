
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


    void fifth_maximum()
    {
        node *temp;
        node *temp1;
        temp=head;

        while(temp->next!=NULL)
        {
            temp1=temp->next;



                if(temp1->next==NULL)
                {
                 
                   int x;
                   x=temp1->data;
                   temp1->data=temp->data;
                   temp->data=x;   
                }

            while(temp1->next!=NULL)

            {




                if(temp->data<temp1->data)
                {
                   int x;
                   x=temp1->data;
                   temp1->data=temp->data;
                   temp->data=x; 
                }

                temp1=temp1->next;

            }

            temp=temp->next;
            if (temp->next==NULL)
            {
                int x=0;
                node *temp=head;
                while(temp->next!=NULL)
                {
                    //cout<<"outputloop"<<endl;
                    //cout<<temp3->data<<endl;
                    x++;
                    temp=temp->next;

                if(x==4)
                {
                    cout<<temp->data<<endl;
                    break;
                }


                }
                

            }
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
    obj.insertion(10,1);
    obj.insertion(13,2);
    obj.insertion(12,3);
    obj.insertion(11,4);
    obj.insertion(9,5);
    cout<<"insertion print "<<endl;
    obj.print();

    cout<<"maximum numbers"<<endl;
     obj.fifth_maximum();
    obj.print();
  
}
