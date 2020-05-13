//This program take input form the user and return its last three ascii values
#include<iostream>
using namespace std;
int main()
{
char n;
int x;
string ascii="000000000000000000000000000000000!0#$%&\'00*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ000000abcdefghijklmnopqrstuvwxyz";
cout<<"Enter the element: ";
cin>>n;
x=ascii.find(n,0);
if(x=='0')
{
    cout<<"not available\n\n";
}
else
cout<<x;


return 0;
}
