#include<iostream>
using namespace std;
int main()
 {

     int i,n,j;
     int a[5][5],b[5][5],c[5][5];
     cout<<"MATRIX ADDITION"<<endl;
     cout<<"\nEnter the order of matrix"<<endl;
     cin>>n;
     cout<<"enter the elements of the first matrix"<<endl;
     for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
       {
           cin>>a[i][j];
       }

     }
     cout<<"enter the elements of the second matrix"<<endl;
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {

             cin>>b[i][j];
         }
     }
     for(i=0;i<n;i++)
     {

         for(j=0;j<n;j++)
         {
             c[i][j]=a[i][j]+b[i][j];
         }


     }
     cout<<"\t"<<c[i][j]<<endl;


     return 0;
 }
