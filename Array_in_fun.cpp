#include<iostream>
using namespace std;

void test_array(int arr[])
{
        
    for (int i=0; i<5; i++)
    {
        cout<<"enter integer numbers "<<endl;
        cin>>arr[i];

    }

        
    for (int i=0; i<5; i++)
    {
        
        cout<<"your output "<<arr[i]<<endl;

    }





}

int main()
{
    int arr[5];
    test_array(arr);
    
}