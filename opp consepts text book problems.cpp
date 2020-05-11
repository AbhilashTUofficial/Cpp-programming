#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
 {
     //2.1
     cout<<"Maths=90\nPhysics=77\nChemistry=69"<<endl;
     return 0;
     //2.2
int a,b;
cout<<"enter the first number: ";
cin>>a;
cout<<"\nenter the second number: ";
cin>>b;
if(a<b)
{
    cout<<b;
}else cout<<"\n"<<a;

//2.3
char n;
int x;
string ascii="00000000000000000000000000000000000000000000000000000000000000000ABCDEFGHIJKLMNOPQRSTUVWXYZ000000abcdefghijklmnopqrstuvwxyz";
cin>>n;
x=ascii.find(n,0);
if(x=='0')
{
    cout<<"not available\n";
}
else
cout<<x;
//2.4
int a,b,c,n;
cout<<"Enter the A value: ";
cin>>a;
cout<<"\nEnter the B value: ";
cin>>b;
cout<<"\nEnter the C value: ";
cin>>c;
n=a/b-c;
cout<<"\nA/B-C="<<n<<endl;

//2.5
int c,f;
cout<<"Enter the temperature\n\nin fahrenheit: ";
cin>>f;
c=(f-32)*5/9;
cout<<"\nThe temperature in celsius:"<<c;
//2.6

int i=1;
int n=i;
for(i=1;i>0;i++)
{
    cout<<i<<endl;


}

float k,r,i,p,v,n;
p=1000;
cout<<"enter the the number of year: ";
cin>>n;
for(i=0;i<=10;i++)
{
      r=0.10+i/100;
  k=1+r;
  v=p*k;
cout<<v*n<<endl;
p=v;
}

int i,vot,s,r,b,n;

for(i=1;i<=10;i++)
{
cout<<"\n\n1.sabu"<<endl;
cout<<"2.ravi"<<endl;
cout<<"3.babu"<<endl;
cout<<"\n\n enter the number of candidate: ";
cin>>vot;
    if(vot==1)
    {
        cout<<"\nsabu";
        s++;
    }
    else if(vot==2)
    {
        cout<<"\nravi";
        r++;
    }
    else if(vot==3)
    {
        cout<<"\nbabu";
        b++;
    }
    else
    {
        cout<<"\ninvalid number";
        n++;


    }
}
cout<<"total votes:"<<i<<endl;
cout<<"sabu:"<<s<<endl;
cout<<"ravi:"<<r<<endl;
cout<<"babu:"<<b<<endl;
cout<<"invalid votes:"<<n<<endl;


int x=0;
cout<<setw(100)<<"----------------------------------------------------------------------------------------------------"<<endl;
cout<<x<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<endl;
cout<<setw(100)<<"----------------------------------------------------------------------------------------------------"<<endl;
cout<<x<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<endl;
x++;
cout<<x<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<endl;
x++;
cout<<x<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<endl;
x++;
cout<<x<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<endl;
x++;
cout<<x<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<endl;
x++;
cout<<x<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<endl;
x++;
cout<<x<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<endl;
x++;
cout<<x<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<endl;
x++;
cout<<x<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<endl;
x++;
cout<<x<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<setw(10)<<"|"<<endl;
x++;
cout<<setw(100)<<"----------------------------------------------------------------------------------------------------"<<endl;

return 0;

 }
