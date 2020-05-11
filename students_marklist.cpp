#include<iostream>
using namespace std;
class mar
 {
     public:
     string name;
     int rol,e,m,c,sum;
     float avg;
     void print(){
     cout<<"\n\n name:";
     cin>>name;
     cout<<"enter roll no:";
     cin>>rol;
    cout<<"\n ENTER SUB MARKS"<<endl;
    cout<<"english mark:";
    cin>>e;
    cout<<"\nmaths mark:";
    cin>>m;
    cout<<"\nc mark:";
    cin>>c;
    sum=e+m+c;
    cout<<"\ntotal mark:"<<e+m+c<<endl;
    cout<<"\naverage mark:"<<sum/3<<endl;
     }


 };
 int main()
  {
      mar mark;
      int i,n;
      cout<<"enter how many students:";
      cin>>n;
     for(i=0;i<n;i++)

{
     mark.print();
}
      return 0;
  }
