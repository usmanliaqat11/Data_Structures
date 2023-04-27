#include<iostream>
using namespace std;

class que{

    private:
    int *arr;
    int *front;
    int *rear;

    int size;

    public:

    que(int s)
    {
        size=s;
        arr=new int[size];
        rear=NULL;
        front=NULL;

    }


    void enque(int value)
    {
        

        if(rear==NULL && front==NULL)
        {
          rear=arr;
          front=arr;
          *(rear)=value;
          rear++;
        
          return;

        }

        if(rear==arr+(size-1) && front==arr)
        {
             cout<<"que overflow"<<endl;
            return;
        }

        if((rear+1)==front)
        {
             cout<<"que overflow"<<endl;
            return;
        }

        else
        {
            *rear=value;
            rear++;
        }


    }


   

int dequeue()

{
    
    if(front == NULL)
    {
        cout<<"que underflows"<<endl;
        return 0;

    }

    if(front == rear)
    {
        front = rear = NULL;
        return 0;

    }

    if(front == arr+size-1)
    {
        front = arr;
        return 0;


    }
    
    int x=*front;
    front++;
    return x;





}



};



int main()
{
    que obj(5);
    obj.enque(1);
    obj.enque(2);
    obj.enque(3);
    obj.enque(4);
    obj.enque(5);

    cout<<obj.dequeue();
    cout<<obj.dequeue();

}