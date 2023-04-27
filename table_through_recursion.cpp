#include<iostream>
using namespace std;

int foo(int x)
{
    cout<<"2x"<<x<<"="<<2*x<<endl;

    if(x==10)
    {
        return 0;
    }

    x++;
    return foo(x);
}

int main()
{
    int a=1;
    cout<<foo(a);
}

