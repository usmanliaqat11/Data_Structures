    #include<iostream>
    using namespace std;

    class list {

        public:

        int len;
        int *arr;
        int size;


        list(int s,int a)
        {
            size=s;
        
            len=a;

            arr=new int[s];
            for (int i=0; i<len; i++)
            {
                
                arr[i]=i;
                cout<<arr[i]<<endl;
            }




        }


            void insert(int value, int pos)
            {
                
                int *temp=arr;
                int count=0;
                for (int i=0; i<pos; i++)
                {
                    temp++;
                    count++;
                    

                }
                cout<<"count= "<<count<<endl;

                int x=len;
                
                for (int i=0; i<len; i++)
                {
                    
                    cout<<"second loop"<<i<<endl;
                    temp=arr+(x-1);
                    *(temp+1)=*temp;
                    temp--;
                    x--;

                    if(x==pos)
                    {
                        *(temp+1)=value;
                        len++;
                        return;
                    }
                    
                }
                
                
                
            }

            void remove(int pos)
            {
                int a=len;
                a=0;
               int *temp=arr;
                for (int i=0; i<pos; i++)
                {
                    cout<<"outer loop"<<endl;
                    temp++;
                    a++;
                    if(a==pos)
                    {
                        for(int i=pos; i<len; i++)
                        {
                            cout<<"inside loop"<<endl;
                            *temp=*(temp+1);
                            temp++;
                            a++;
                        
                        }
                    }
                }
                len--;
            }



            void find(int x)
            {
                int *temp=arr;

                for (int i=1; i<len; i++)
                {
                    if(*temp==x)
                    {
                        cout<<"value is found= : "<<*temp<<endl;
                        return;
                    }

                
                
                    else{
                            temp++;
        
                    

                    }
                    

                
                }

                cout<<"value not found"<<endl;

            }

            void print()
            {
                int *temp;
                temp=arr;

                for (int i=0; i<len; i++)
                {
                cout<<*temp++<<endl;   
                }
            }

    };

    int main()
        
        {
            list obj(8, 5);
            obj.insert(8,4);
            obj.print();
            obj.remove(2);
            obj.print();
            obj.find(8);
        }
