    #include<iostream>
    #include<cmath>
    using namespace std;

    int i=1;
    void foo(int x)
    {
        
        cout<<x<<"*"<<x*i<<"="<<x<<endl;
        if(x==10)
        {
            return;
        }
        x++;
        i++;

        foo(x);
    }

    int main()
    {
        int a=2;
        foo(a);

    }   
