#include<iostream>
using namespace std;

struct node{

    int data;
    node *next;

};

class que{


    public:
    node *rear=NULL;
    node *front=NULL;
    int len=0;

    void enque(int value)
    {
        if(rear==NULL)
        {
           node *n=new node;
            n->data=value;
            n->next=NULL;
            rear=n;
            front=rear;
            len++;

            return;
        }


        node *n=new node;
        n->data=value;
        rear->next=n;
        n->next=NULL;
        rear=n;
        len++;
        return;



    }


    bool is_empty()
    {
        if(len==0)
        {
            return true;
        }

        else 
        return false;
    }




    int deque()
    {
        node *temp=front;

        if(is_empty())
        {
            cout<<"stack is underflow"<<endl;
            return 0;
        }

        if(temp==front)
        {
            int val=front->data;
            temp=temp->next;
            front->next=NULL;
            delete front;
            front=temp;
            len--;
            return val;

        }
        
    }














};

int main()
{
  que obj;
  obj.enque(1);
  obj.enque(2);
  obj.enque(3);
  obj.enque(4);

  cout<<obj.deque()<<endl;
  cout<<obj.deque();
  cout<<obj.deque();
  cout<<obj.deque();
  cout<<obj.deque();
}