#include<iostream>
using namespace std;
class single
 {
 private:
    long int num,value,sum,individual;
 public:
    single()
    {
        num=0;
        sum=0;
        individual++;
        cout<<"The object is created"<<endl;

    }
    int getvalue();
    int calc();
    ~single()
    {
        individual--;
        cout<<"The object has been destroyed";

    }
 };
 int single::getvalue()
 {
     cout<<"enter the value:";
     cin>>value;

 }
 int single::calc()
 {
     do
     {
         num=value%10;
         sum=value/10;
         value=num+sum;
     }
     while(value>9);
     cout<<"The individual is :"<<value<<endl;
 }
 int main()
  {
      single c;
      c.getvalue();
      c.calc();
      return 0;
  }
