#include<iostream>
using namespace std;

class list{

    public:

            
            int size=7;
            int *arr=new int [size];
            int len;


            list()
            {
                len=0;
                size=0;
                arr=NULL;
            }



            list(int b)
            {
               len=b;
               for (int i=0; i<len; i++)
               {

                   arr[i]=i;
               } 
            }


            void insert(int a, int p)
            {
                int *temp=arr;
                int *head=arr;
            
            
                for (int i=0; i<p; i++)
                {

                    cout << "i am first loop"<<i<<endl;
                    temp++;
                
                }
                
              
                 int x=len;
                for(int i=0; i<x; i++)
                {
                    cout << "i am second loop",i;
                   
                    temp=arr+(x-1);
                    *(temp+1)=*temp;
                    x--;
                    temp--;
                    
                    if(x==p)
                    {
                      *(temp+1)=a;
                      len++;
                    }
                  

                }
            }

                
               void remove(int pos)
               {
                   int *temp=arr;
                   int *head=arr;

                   for (int i=0; i<pos; i++)
                   {
                       temp++;
                       cout<<"i am in position "<<i<<endl;

                   }

                   int c=len;
                   for (int i=0; i<len; i++)
                   {
                       temp=arr+(c-1);
                       temp--;
                       c--;

                       if(c==pos)
                       {
                           for(int i=0; i<c; i++)
                           {

                            *temp=*(temp+1);
                            temp++;
                            c++;
                            if (c==size)
                            {
                                return;
                            }
                           
                           }

                       }
                   }



                     
              }  



        void print()
    
    {
        int *temp;
        temp=arr;
        for(int i=0; i<len; i++)
        {
            cout<<"output"<<*temp++<<endl;
            cout<<"hy"<<endl;
        }
    }




};



int main()
{
   list l(5);
   l.insert(4,2);
   l.print();
   l.remove(2);
   l.print();

}