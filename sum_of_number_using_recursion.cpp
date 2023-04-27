#include<iostream>
using namespace std;


int sum_of_given_number(int n)
{
  int x;
  int sum=0;
    if(n==1)
    {
    
        return 1;
        
    }


    else 
    {   
        x=sum_of_given_number(n-1);
        //sum=x+n;
        cout<<"valo of x= "<<x<<"value of n =" <<n<<endl;
        int y=sum=x+n;
        cout<<y<<endl;

        return sum;
        
        
        
      }
}


int main()
{
    cout<<sum_of_given_number(5);
}