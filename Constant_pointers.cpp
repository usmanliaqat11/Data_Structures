#include<iostream>
using namespace std;

int main()
{
    int x=5;
    int * p1 = &x; // non-const pointer to non-const int
    const int * p2 = &x; // non-const pointer to const int
    int * const p3 = &x; // const pointer to non-const int
    const int * const p4 = &x; // const pointer to const int

    cout<<*p1<<endl;
    cout<<*p2++<<endl;
    cout<<(*p3)++<<endl;



}