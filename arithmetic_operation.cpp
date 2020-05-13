//This code can perform all arithmetic operation with two numbers and display the result
#include<iostream>
using namespace std;
class arith
 {
     public:
     int a;
     float b,c;
     arith()

     {
         cout<<"ARITHMETIC OPERATION"<<endl;
         cout<<"\n Enter the integer value:";
         cin>>a;
         cout<<"\n Enter the float value:";
         cin>>b;

     }
     float add();
     float sub();
     float div();
     float mul();
     float mod();
     display()
     {
         cout<<"\nThe add is :"<<add()<<endl;
         cout<<"The sub is :"<<sub()<<endl;
         cout<<"The div is :"<<div()<<endl;
         cout<<"The mul is :"<<mul()<<endl;
         cout<<"The mod is :"<<mod()<<endl;

     }
 };
 float arith::add()
 {
  c=a+b;
  return(c);
 }
 float arith::sub()
 {
  c=a-b;
  return(c);
 }
 float arith::div()
 {
  c=a/b;
  return(c);
 }
 float arith::mul()
 {
  c=a*b;
  return(c);
 }
 float arith::mod()
 {
  c=a% int(b);
  return(c);
 }

 int main()
  {
      arith ar;
 ar.display();

      return 0;
  }
