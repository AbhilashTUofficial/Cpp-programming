#include<iostream>
using namespace std;
long fact(int n)
{
    if(n==0)
        return 1;
    else
        return(n*fact(n-1));
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"\n\n The factorial of "<<n<<" is "<<fact(n)<<endl;
    return 0;
}
