#include<iostream>
using namespace std;
int main()
 {
     int num=7,guesscount=0,guesslimit=3,guess;
     bool outofguess=false;
     while(guess!=num&&!outofguess)
     {
         if(guesscount<guesslimit){
         cout<<"enter:";
         cin>>guess;
         guesscount++;
         }
         else
         {
             outofguess=true;
         }

     }
     if(outofguess){
        cout<<"you lose";
     }
     else{
     cout<<"correct!";
     }

 }
