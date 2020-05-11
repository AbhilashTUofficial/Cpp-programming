#include<iostream>
using namespace std;
class FLOAT
 {

 public:
    int x;
    int y;
    FLOAT()
    {

    }
    FLOAT (int i,int k)
    {
        x=i;
        y=k;
    }
    FLOAT operator+(FLOAT d)
    {
        FLOAT t;
        t.x=x+d.x;
        t.y=y+d.y;
        return t;
    }
    FLOAT operator-(FLOAT d)
    {
        FLOAT t;
        t.x=x-d.x;
        t.y=y-d.y;
        return t;
    }
    FLOAT operator*(FLOAT d)
    {
        FLOAT t;
        t.x=x*d.x;
        t.y=y*d.y;
        return t;
    }
    FLOAT operator/(FLOAT d)
    {
        FLOAT t;
        t.x=x/d.x;
        t.y=y/d.y;
        return t;
    }
    void show()
    {
        cout<<"result:\t"<<x<<y;
    }
    void display()
    {
        cout<<"x="<<x;
        cout<<"y="<<y;

    }
 };
 int main()
 {
     char ch;
     FLOAT A(2,5),B(4,9),C;
     int i;
     int m;
     cout<<"\n
 }
