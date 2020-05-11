
#include<iostream>
#include<math.h>
using namespace std;
class employee
 {
 public:
    int eno,dept;
    char name[20];
    char grade;
    long int bp;
    int get()
     {
         cout<<"---------employee details----------"<<endl;
         cout<<"\nEnter the name:";
         cin>>name;
         cout<<"\nEnter the employee number:";
         cin>>eno;
         cout<<"\nEnter the grade:";
         cin>>grade;
         cout<<"\nEnter the department:";
         cin>>dept;
         cout<<"\nEnter basic pay";
         cin>>bp;
     }
     int show()
     {
         cout<<"----------employee slip-----------"<<endl;
         cout<<"\nName:"<<name<<endl;
         cout<<"Employee number:"<<eno<<endl;
         cout<<"Grade:"<<grade<<endl;
         cout<<"Department:"<<dept<<endl;
         cout<<"Basic pay:"<<bp<<endl;
     }

};

class pay:public employee
 {
     public:
     int da,hra,pf,np;
     int calc()
      {
          if((grade=='a')||(grade=='A'))
          {
              da=bp*10/100;
              hra=bp*12/100;
              pf=bp*14/100;
              np=(bp+da+hra)-pf;
          }
          else
          {
              if((grade=='b')||(grade=='B'))
              {
                  da=bp*6/100;
              hra=bp*8/100;
              pf=bp*10/100;
              np=(bp+da+hra)-pf;
              }
          }
      }
    int disp()
    {
        cout<<"----------display--------------"<<endl;
        cout<<"\nSalary:"<<bp<<endl;
        cout<<"Daily alowance:"<<da<<endl;
        cout<<"House relevets:"<<hra<<endl;
        cout<<"Provident fund:"<<pf<<endl;
        cout<<"Net pay:"<<np<<endl;
    }
 };
 int main()
  {
      pay p;
      p.get();
      p.show();
      p.calc();
      p.disp();
      return 0;
  }

