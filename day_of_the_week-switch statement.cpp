#include<iostream>
using namespace std;

int main()
 {
     int daynum;
     string dayname;

     cout<<"_________days of the week___________";
     cout<<"\n\n enter the day number";
     cin>>daynum;
    switch(daynum)
      {
    case 0:
        dayname="sunday";
        break;
    case 1:
        dayname="monday";
        break;
    case 2:
        dayname="tuesday";
        break;
    case 3:
        dayname="wednesday";
        break;
    case 4:
        dayname="thursday";
        break;
    case 5:
        dayname="friday";
        break;
    case 6:
        dayname="saturday";
        break;
    default:
        dayname="invaled daynum";
      }
      cout<<"\n"<<dayname;
      return 0;


 }
