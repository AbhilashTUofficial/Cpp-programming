
#include<iostream>
using namespace std;
class acc
{
public:
     int accnum,ch,tp;
     int witamo;
     int amo;
    string name[20];
string enter();
string entry();
void use();
int balinfo();
int depamo();
int withamo();
void term();


};
void acc::term()
{
    accnum=0;
    string name=0;
    amo=0;
    acc c;
    c.entry();
}
void acc::use()
{
    acc c;
    cout<<"\n1.Balance info"<<endl;
    cout<<"2.Deposit amount"<<endl;
    cout<<"3.withdraw amount"<<endl;
    cout<<"4.Terminate account"<<endl;
    do
    {
        cin>>ch;
        switch(ch)
        {
        case 1:
            c.balinfo();
            break;
        case 2:
            c.depamo();
            break;
        case 3:
            c.withamo();
            break;
        case 4:
            c.term();
            break;
        case 5:
            break;

        }

    }while(ch<5);
    if(ch>5)
    {
        cout<<"wrong input"<<endl;
    }
    cout<<"Enter your choice:";
    cin>>ch;

}
int acc::balinfo()
{

    cout<<"\tBalance:"<<amo<<endl;
}
int acc::depamo()
{
    acc c;
    cout<<"\n\tDeposit amount"<<endl;
    cout<<"\tEnter amount:";
    cin>>amo;
    amo=amo;
    cout<<endl;
    c.balinfo();
}
int acc::withamo()
{
    acc c;
    cout<<"n\tWithdraw amount"<<endl;
    cout<<"\tEnter amount:";
    cin>>witamo;
    if(witamo>amo)
    {
        cout<<"\n\tYou dont have enough money"<<endl;
        c.use();
    }

}
 string acc::enter()
    {
        cout<<"\nEnter"<<endl;
    }

string acc::entry()
{
    acc c;
     c.enter();
    cout<<"\tName of the user:";
    cin>>name[20];
    c.enter();
    cout<<"\tAccount number:";
    cin>>accnum;
    c.enter();
    cout<<"\tAmount:";
    cin>>amo;
    c.enter();
    cout<<"\tType of account"<<endl;
    cout<<"\t1.cooperate account"<<endl;
    cout<<"\t2.personal account"<<endl;
    cin>>tp;


}
int main()
{
    acc c;
    cout<<"Welcome to the bank of Abhilash"<<endl;
    cout<<"==============================="<<endl;
    c.entry();
    c.use();

    return 0;
}
//incomplete
