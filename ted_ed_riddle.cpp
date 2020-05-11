#include<iostream>
using namespace std;
int main()
{

    int n=1;
   for(int i=0;i<=36;i++)
   {
       for(int j=0;j<=36;j++)
       {
           for(int k=0;k<=36;k++)
           {
               if(i*j*k==36 && i<=j && j<=k)
               {
                   cout<<i<<" x "<<j<<" x "<<k<<"="<<i*j*k;
                   cout<<"\t"<<i<<" + "<<j<<" + "<<k<<"="<<i+j+k<<endl;

               }


           }

       }

   }

   return 0;
}
