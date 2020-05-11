#include<iostream>
#include<iomanip>

using namespace std;
class str
{
    public:
    string str1,str2;
    str()
    {
        cout<<"Enter the string: ";
        cin>>str1;
        cout<<"Enter the string: ";
        cin>>str2;
    }

    string strmerg();


};

string str::strmerg()
{
    cout<<"\n"<<str1<<str2<<endl;
    cout<<"string length:"<<str1.length()<<endl;
    cout<<"string length:"<<str2.length()<<endl;
    cout<<"string length:"<<str1.length()+str2.length()<<endl;


}


int main()
{

    str r;
    r.strmerg();

    return 0;
}
