
#include<iostream>
using namespace std;
class space
 {
     int x,y,z;
 public:
    void getdata(int a,int b,int c);
    void disdata();
    void operator-();
 };
 void space::getdata(int a,int b,int c)
  {
      x=a;
      y=b;
      z=c;
  }
 void space::disdata()
  {
      cout<<"x="<<x<<"y="<<y<<"z="<<z<<endl;
  }
  void space::operator-()
  {
      x=-x;y=-y;z=-z;
  }
  int main()
  {
      int a,b,c;
      cout<<"a:";
      cin>>a;
      cout<<"b:";
      cin>>b;
      cout<<"c:";
      cin>>c;
      space s;
      s.getdata(a,b,c);
      s.disdata();
      -s;
      s.disdata();
      return 0;
  }
