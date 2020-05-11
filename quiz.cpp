#include<iostream>
using namespace std;

int main()
 {

     int ch;
     cout<<"_____________quiz______________\n";
     cout<<"\n\n";
     cout<<"what is the name of the nearest\nstar to our sun?\n";
     cout<<"OPTIONS:\n\t1.there is no other stars\n\t2.proxima centauri\n\t3.alpha centauri\n";

     switch(ch)
      {

      case 1:
        cout<<"WRONG ANSWER";
         cout<<"\nthe answer is 1.proxima centuri";
        break;
      case 2:
        cout<<"RIGHT ANSWER!";
        break;
      case 3:
        cout<<"WRONG ANSWER";
        cout<<"\nthe answer is 1.proxima centuri";
        break;
      default:
        cout<<"you entered a invalid option";

      }
      return 0;
 }
