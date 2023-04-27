#include<iostream>
using namespace std;

void merging(int x[],int size, int y[], int size1, int z[], int size2  )



{
    
    int a[5]={};
    int b[5]={};
    for(int i=0; i<size; i++)
    {
        a[i]=x[i];
        cout<<a[i]<<endl;
    }



    for(int j=0; j<size1; j++)
    {
        b[j]=y[j];
        cout<<b[j]<<endl;

    }
    int p = 0;
    for (int k=0; k<10; k++)
    {
        if(k<5)
        {
        z[k]=a[k];
        cout<<"z wala llop"<<z[k]<<endl;
        }

        if(k>=5)
        {
            z[k]=b[p];
            cout<<"z ka second loop"<<z[k]<<endl<<endl;
            p++;
        }

        
    }


}


int main()
{
    int a[5]={10,9,8,7,6};
    int b[5]={5,4,3,2,1};

    int z[10]={};

    merging(a,5,b,5,z,10);
}