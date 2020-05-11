#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

class binary
{
    string s;
 public:
    void read()
    {
        cout<<"Enter the binary number:";
        cin>>s;
    }
    void chk_bin()
    {
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)!='0' && s.at(i)!='1')
            {
                  cout<<"\nINCORRECT BINARY CODE"<<endl;
            break;
            }
            else
                for(i=0;i<s.length();i++)
            {
                if(s.at(i)=='0')
                s.at(i)='1';
                else
                    s.at(i)='0';
            }

        }
    }
    void display()
    {
        cout<<"The 1's complement is :"<<s;
    }
};

int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    return 0;
}
