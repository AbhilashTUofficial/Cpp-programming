#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<cstdlib>
#include<ctime>
using namespace std;
bool gameover;
char ch;
const int width=20;
const int height=20;
int x,y,fruitX,fruitY;
int score;
enum eDirection{
     STOP=0,
     LEFT,
     RIGHT,
     UP,
     DOWN
};
eDirection dir;
void setup()
 {
   gameover=false;
   x=width/2;
   y=height/2;
   fruitX=rand()% width;
   fruitY=rand()% height;
   score=0;

 }
void draw()
 {
 	system("cls");
 	for(int i=0;i<width+2;i++)
 		cout<<"#";
    cout<<endl;

    for(int i=0;i<height;i++)
     {
     	for(int j=0;j<width;j++)
     	 {
     	 	if(j==0)
			 cout<<"#";
			 if(i ==y && j ==x)

			 cout<<"O";
			 else if(i==fruitY&&j==fruitX)

			 cout<<"F";
     	 	else
     	 	 cout<<" ";

			if(j==width-1)
			 cout<<"#";


		 }
		 cout<<endl;
	 }






	for(int i=0;i<width+2;i++)
 	{
 		cout<<"#";
	}
	cout<<endl;
 }
void input()
 {
 	if(kbhit())
 	{


 	switch(getch())
	 {

	 	case 'a':
	 		dir=LEFT;
	 		break;
	 	case 'd':
	 		dir=RIGHT;
	 		break;
		case 'w':
	 		dir=UP;
	 		break;
		case 's':
	 		dir=DOWN;
	 		break;
	 	case 'x':
	 		gameover=true;
	 		break;
		default:
		    break;

	 }
 	}
 }
void logic()
{
	switch(dir)
	 {

	 	case LEFT:
	 		x--;
	 		break;
	 	case RIGHT:
	 		x++;
	 		break;
		case UP:
	 		y++;
	 		break;
		case DOWN:
	 		y--;
	 		break;
		default:
		    break;
     }


}
int main()
 {
 	setup();
 	while(!gameover)
 	draw();
 	input();
 	logic();
 }
