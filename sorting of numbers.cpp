#include<iostream>

using namespace std;

int main()
  {
      int i,j,temp,x[10];
      cout<<"Enter 10 elements"<<endl;
      for(i=0;i<10;i++)
      {
          cin>>x[i];
      }
      for(i=0;i<10;i++)
      {
      for(j=i+1;j<10;j++)
      {
         if(x[i]>x[j])
         {
           temp=x[j];
         x[j]=x[i];
         x[i]=temp;

         }
      }
    }

  cout<<"the sorted elements \n";
  for(i=0;i<10;i++)
  cout<<x[i]<<endl;;

  return 0;

  }


