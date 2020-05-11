#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
     int sum,i,n,x[10],tot;
     float avg,va;
     double sd;
     cout<<"enter the number of terms: ";
     cin>>n;
     cout<<"\n enter the elements\n";
     for(i=1;i<=n;i++)
     {
         cin>>x[i];

     }
     sum=0;
     for(i=1;i<=n;i++)
     {
         sum=x[i]+x[i];
     }
     avg=(float)sum/n;
     tot=0;
     for(i=1;i<=n;i++)
     {
            tot=((x[i]-avg)*(x[i]-avg));

     }
     va=(float)tot/n-1;
     sd=(double)sqrt(va);
     cout<<"\nsum:"<<sum<<endl;
     cout<<"\navg:"<<avg<<endl;
     cout<<"\nva:"<<va<<endl;
     cout<<"\nsd:"<<sd<<endl;


//uncompleted
     return 0;
 }
