#include<iostream>

using namespace std;
string p;
int a,b,c,result;
int func( int a,int b,string p)

 {
     if(p=="+")
     {

     c=(a+b);
     cout<<"|ANSWER:                    |"<<c;
     }
     if(p=="-")
    {

     c=(a-b);
     cout<<"|ANSWER:                    |"<<c;
     }
      if(p=="*")
    {

     c=(a*b);
     cout<<"|ANSWER:                    |"<<c;
     }
      if(p=="/")
    {

     c=(a/b);
     cout<<"|ANSWER:                    |"<<c;
     }
     if(p!="+",p!="-",p!="*",p!="/"){
        cout<"h";
     }
 }
int main()
 {
     int d;
     cout<<"            CALCULATOR         \n";
     cout<<"_______________________________\n";
     cout<<"|                              |\n";
     cout<<"| GUIDE                        |\n";
     cout<<"|                              |\n";
     cout<<"|enter the first               |\n";
     cout<<"| number:                      |\n";
     cout<<"|                              |\n";
     cout<<"|enter the second              |\n";
     cout<<"| number:                      |\n";
     cout<<"|                              |\n";
     cout<<"|then enter the operation      |\n";
     cout<<"|                              |\n";
     cout<<" ______________________________\n";
     cout<<"|                              |\n";
     cout<<"|                              |\n";
     cin>>a;
     cin>>p;
     cin>>b;
     func(a, b,p);
     cout<<"|                              |\n";
     cout<<"|                              |\n";
     cout<<" ______________________________\n";


    cout<<"incomplete";
    cin>>d;
     return 0;

 }
