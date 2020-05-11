#include<iostream>
using namespace std;
int main()
 {
     int n,i,a=0,b=1,c;
     cout<<"enter the fibonacci limit:";
     cin>>n;
     for(i=0;i<n;i++)
     {

        c=a+b;
        a=b;
        b=c;
        cout<<c<<endl;
     }
 }
