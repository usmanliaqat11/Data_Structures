#include<iostream>
using namespace std;

class stack{

    private:

    int *arr;
    int size;
    int top;

    public:


    stack(int s)
    {
        size=s;
        arr= new int[s];
        top=-1;
    }


    bool is_full()
    {
        if(top==(size-1))

        {
            return true;
        }

        else
        {
            return false;

        }
    }


    bool is_empty()
    {
        if(top==-1)

        {
            return true;
        }

        else
        {
            return false;

        }

    }


    void push(int val)
    {
        if(is_full())
        {
            cout<<"stack is overflow"<<endl;

            return ;

        }

        top++;
        arr[top]=val;



    }



    int pop()
    {
        if(is_empty())
        {
            cout<<"stack is underflow"<<endl;

            return 0;
        }

        int val;
        val=arr[top];
        top--;

        return val;


    }

    void print()
    {
        while(top!=-1)
        {
            cout<<top<<endl;
            pop();
        }
    }


    


    int top1()
    {
        if(is_empty())
        {
            cout<<"stack is empty"<<endl;

            return 0;
        }

        int val;
        val=arr[top];

        return val;


    }


};  


int main()
{
    stack s1(5);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    // cout<<s1.pop()<<endl;
    // cout<<s1.pop()<<endl;
    // cout<<s1.pop()<<endl;
    // cout<<s1.pop()<<endl;
    // cout<<s1.pop()<<endl;
    s1.print();
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;


}