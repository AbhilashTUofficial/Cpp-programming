#include<iostream>
using namespace std;
class matrix
 {
     public:
     int n,m,i,j,arr[10][10];
     matrix()
     {
         cout<<"MATRIX"<<endl;
         cout<<"\nEnter the order of the matrix"<<endl;
         cout<<"M:";
         cin>>m;
         cout<<"N:";
         cin>>n;

     }
     int getelm();
     int diselm();


 };
 int matrix::getelm()
 {
     cout<<"\nEnter the element"<<endl;
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             cin>>arr[i][j];
         }
     }
 }
 int matrix::diselm()
 {
     cout<<"\n MATRIX"<<endl;
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             cout<<"\t"<<arr[i][j]<<"\t";
         }
         cout<<"\n"<<endl;
     }
 }
int main()
 {
     matrix m;
     m.getelm();
     m.diselm();
     return 0;
 }
