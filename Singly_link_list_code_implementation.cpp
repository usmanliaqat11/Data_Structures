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
     int count=0;

    void add_nodes()
    {
       
        if(head==NULL)
        {
            node *n=new node;
            cout<<"enter first node"<<endl;
            cin>>n->data;
            n->next=head;
            head=n;
            count++;

        }

        if (head!=NULL)
        {
          
            node *temp;
            temp=head;
            for(int i=1; i<5; i++)
            {
                node *n=new node;
                cout<<"enter after head node"<<endl;
                cin>>n->data;
                temp->next=n;
                temp=temp->next;
                count++;
            }
            
        }

    }

    void insertion(int value)
    {
        node *temp=head;
        
            for (int i=0; i<count; i++)
            {
                


                    if (temp->data==value)
                        {

                            if (temp==head)
                            {
                                cout<<"by"<<endl;
                                node *n=new node;
                                n->data=10;
                                n->next=head;
                                head=n;
                                count++;
                                break;
                            }

                            if(temp->next==NULL)
                        {
                            cout<<"hy"<<endl;
                          node *n=new node;
                          n->data=5;
                          temp->next=n;
                          count++;
                        }
                    
                        
                        else
                        {
                          
                        node *n=new node;   
                        cout<<"insertion node"<<endl;
                        n->data=15;  
                          n->next=temp->next;
                          temp->next=n;  
                          count++;
                        }
                    }

        

                


                temp=temp->next;
            }
            
            cout<<"count = "<<count<<endl;
            
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
                count--;
                break;

                }

                //temp=temp1  ko kbhi nhi use krna delelte krtay huay it gives error


                temp1=temp->next;
                if(temp1->data==value)
                {

                delete temp1;
                temp->next=NULL;
                count--;
                break;

                }

              }



             

            temp=temp->next;
                

           }
    }
            
            
 

 

    

   
   
    void print()
    {
        node *temp;
        temp=head;

        for (int i=0; i<count; i++)
        {
           int x=0;
           x++;

             cout<<"output = "<<temp->data<<endl;
             temp=temp->next;

             if(x==count)
             {
                 cout<<temp->data<<endl;
                 break;
             }
             

        }

        cout<<count<<endl;
    }


};



int main()
{
    list obj;
    obj.add_nodes();
    obj.insertion(0);
    obj.insertion(3);
    obj.insertion(4);
    cout<<"after insertion";
    obj.print();
    cout<<"after deletion"<<endl;
    obj.deletion(2);
    obj.deletion(1);
    obj.print();
    obj.deletion(5);
    obj.print();

}