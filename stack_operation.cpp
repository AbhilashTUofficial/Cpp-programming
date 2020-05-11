#include<iostream>
using namespace std;

class stack

 {
 public:
int stk[5],n,i;
     int top;
    stack()
    {
        top=0;
    }
    int push();
    int pop();
    int display();
 };
 int stack::push()

  {
      if(top==5)
        cout<<"\n Stack is full";
      else
      {
          top=top+1;
          cout<<"\n Enter the value:";
          cin>>n;
          stk[top]=n;
      }
  }
  int stack::pop()
  {
      if(top==0)
        cout<<"stack is empty";
      else
      {
        i=stk[top];
        top=top-1;
        cout<<"\n Poped element is:"<<i<<endl;

      }
  }
  int stack:: display()
  {
      if(top==0)
        cout<<"\n Stack is empty";
      else
      for(i=top;i>0;i--)
      {
          cout<<"\n"<<stk[i];

      }

  }
  int main()
  {
      int ch;
      stack st;
      cout<<"\n\t1.push operation";
      cout<<"\n\t2.pop operation";
      cout<<"\n\t3.display operation";
      cout<<"\n\t4.exit operation";
    do
    {
        cout<<"\n enter your choice:";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"\n\tpush operation";
            st.push();
            break;
        case 2:
            cout<<"\n\tpop operation";
            st.pop();
            break;
        case 3:
            cout<<"\n\tdisplay operation";
            st.display();
            break;
        case 4:
            cout<<"\n\texit operation";

            break;
        }
    }
    while(ch<4);
return 0;
  }
