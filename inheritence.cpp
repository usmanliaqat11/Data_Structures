#include<iostream>
using namespace std;

class tyre{

    public:

    string brand_name;
    string size;

    tyre()
    {

    }

    void set_tyre(string a, string b)
    {
        brand_name=a;
        size=b;
    }

    void print ()
    {
        cout<<brand_name<<endl;
        cout<<size<<endl;
    }

    




};


class engine{

    public:

    string engine_volume;

    engine()
    {

    }

    void set_engine(string a)

    {
        engine_volume=a;
    }

    void print()
    {
        cout<<engine_volume<<endl;
    } 


};


class bike: public engine, public tyre{

public:

bike()
{

}

void print()
{
    tyre::print();
    engine::print();
    
}



};



int main()
{
    bike obj;
    obj.set_engine("4wheeler");
    obj.set_tyre("4wheeler","honda");
    obj.print();
    
}