
#include<iostream>
using namespace std;

class person
{

   public:

  int age;
  string name;
  string adress;

  person()  
  {
      age=0;
      name="";
      adress="";
  }

  void set_adress(int a, string b, string c)
  {
      age=a;
      name=b;
      adress=c;
  }

  void get_adress()
  {
      cout<<age<<endl;
      cout<<name<<endl;
      cout<<adress<<endl;


  }

};


int main()
{
  person p;
  p.set_adress(20,"usman", "fsd");
  p.get_adress();    
}






