#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    int *intptr= new int;
    char *namestr=new char[8];

    *intptr=357;
    strcpy (namestr,"datastructure");
    for (int i=0; i<=8; i++)
    {
        cout<<namestr[i]<<endl;
    }

    cout<<*intptr<<endl;

}