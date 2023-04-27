#include<iostream>
using namespace std;

int main()
{
    int *arr;
    arr=new int[5];

    for(int i=0; i<5; i++)
{
    cout<<"enter number"<<endl;
    cin>>arr[i];

}


    for(int i=0; i<5; i++)
{
    cout<<"output number"<<arr[i]<<endl;

}

delete [] arr;
return 0;
    
}