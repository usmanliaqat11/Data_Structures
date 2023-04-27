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


    void max_find()
    {
        
        node *temp=head;
        node *temp1;
        temp1=temp->next;
        
            while(temp1->next!=NULL)
            {
                if(temp->data<temp1->data)
                {
                    int x;
                    x=temp->data;
                    temp->data=temp1->data;
                    temp1->data=x;
                }

                temp1=temp1->next;

                if(temp1->next==NULL)
                {

                    int x;
                    x=temp->data;
                    temp->data=temp1->data;
                    temp1->data=x;


                }


            if(temp1->next==NULL)

            { 
                
                
                    while(temp->next!=NULL)
                    {
                        cout<<"insider loop"<<endl;
                        if(temp1->data>temp->data)
                        {
                            int x;
                            x=temp->data;
                            temp->data=temp1->data;
                            temp1->data=x;
                        }
                        temp=temp->next;
                        if(temp->next==NULL)
                        {
                            node *temp3;
                            temp3=head;
                          while(temp3->next!=NULL)
                          {
                              if(temp3->next==temp1)
                            {
                        
                            temp=head;
                            head=temp->next;
                            temp->next=NULL;
                            delete temp;

                            temp3->next=NULL;
                            delete temp1;



                            break;

                            }
                            temp3=temp3->next;

                          }
                          





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
    obj.insertion(3,1);
    obj.insertion(10,2);
    obj.insertion(11,3);
    obj.insertion(15,4);
    obj.insertion(1,5);
   
    obj.print();
    obj.max_find();
    obj.print();
    obj.max_find();
    obj.print();
    obj.max_find();
    obj.print();
}
