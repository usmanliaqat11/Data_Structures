#include<iostream>
using namespace std;

struct node{
        node *next;
        int data;

};


class list{

    public:

    node *head=NULL;
    node *temp;
    int len=0;


    void insertion(int value, int pos)
    {
        int x;
        x=pos;
        
        if (head==NULL)
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
            temp=temp->next;
            len++;
        
        }
        
      }
   
   
     void insertion_head(int value)
        {
            temp=head;
            node *n=new node;
            n->data=value;
            n->next=head;
            head=n;
            len++;
        }
        
        
        
        void insertion_on_end(int value)
        {
          temp=head;
          for(int i=1; i<len; i++)
          {
           temp=temp->next;
           
          }
          
          node *n=new node;
          n->data=value;
          temp->next=n;
          n->next=NULL;
          len++;
          
        }



        void deletion(int value)
    {
        node *temp=head;
        node *temp1=head;

        while(temp->next!=NULL)
        {

        
            if (head==NULL)
            {
                cout<<"head condition"<<endl;
            }

           if (temp->next->data==value)
              
              {
                  
            
                cout<<"i am deletion condition"<<endl;
        

                 temp1=temp->next;

                if(temp1->data==value)
                {

                temp->next=temp1->next;
                 delete temp1;
                len--;
                break;

                }

                //temp=temp1  it gives error temp=temp1 nhi assign ho ga ye temp1=temp->next ye sahi tareqa hai 


                temp1=temp->next;
                if(temp1->data==value)
                {

                delete temp1;
                temp->next=NULL;
                len--;
                break;

                }

              }



             

            temp=temp->next;
                

           }
    }


        void print()
        {
            temp=head;
            for(int i=0; i<=len; i++)
            {
                cout<<temp->data<<endl;
                temp=temp->next;

                if(temp->next==NULL)
                {
                    cout<<temp->data<<endl;
                    return;
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
    obj.insertion(5,4);
    obj.insertion(6,5);
    obj.insertion(7,6);
    obj.insertion_head(10);
    obj.insertion_head(30);
    obj.insertion_head(40);
    obj.insertion_on_end(20);
    obj.insertion_on_end(100);
    obj.insertion_on_end(200);
    cout<<"after deletion"<<endl;
     obj.deletion(40);
    obj.deletion(200);
    obj.deletion(100);
   
    obj.deletion(30);
    obj.deletion(10);

    obj.print();
    
}