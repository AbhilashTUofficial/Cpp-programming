#include<iostream>
using namespace std;
class findarea
  {
      public:
      int a,b,c;
      int area(int a,int b)
      {
          cout<<"Area of the triangle:"<<(a*b/2)<<endl;
      }
      int area(int a)
      {
          cout<<"Area of the circle:"<<(3.141*a)<<endl;
      }

  };
  int main()
  {
      int h,r;
      findarea tri;
      cout<<"Enter the height of the triangle :";
      cin>>h;
      cout<<"\nEnter the breath of the triangle :";
      cin>>r;
      tri.area(h,r);
      findarea cir;
      cout<<"\nEnter the radius of the circle :";
      cin>>r;
      cir.area(r);
      return 0;

  }
