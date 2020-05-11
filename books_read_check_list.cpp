#include<iostream>
using namespace std;
class book{
public:

    string title,author,genre;
    int page,pubdate;
    book(string name,int n){
        cout<<n<<"."<<name<<endl;

    }


};

int main()
{
    int booknum;
        cout<<"HARRY POTTER BOOKS\n"<<endl;

    book book1("harry potter and the philosopher stone",1);
    book1.title="harry potter and the philosopher stone";
    book1.author="jk rowling";
    book1.genre="fantasy novel";
    book1.page=336;
    book1.pubdate=1997;

    book book2("harry potter and the chamber of secrets",2);
    book2.title="harry potter and the chamber of secrets";
    book2.author="jk rowling";
    book2.genre="fantasy novel";
    book2.page=341;
    book2.pubdate=1998;

    book book3("harry potter and the prisoner of azkaban",3);
    book3.title="harry potter and the prisoner of azkaban";
    book3.author="jk rowling";
    book3.genre="fantasy novel";
    book3.page=435;
    book3.pubdate=1999;

    book book4("harry potter and the goblet of fire",4);
    book4.title="harry potter and the goblet of fire";
    book4.author="jk rowling";
    book4.genre="fantasy novel";
    book4.page=636;
    book4.pubdate=2000;

    book book5("harry potter and the order of phoenix",5);
    book5.title="harry potter and the order of phoenix";
    book5.author="jk rowling";
    book5.genre="fantasy novel";
    book5.page=800;
    book5.pubdate=2003;

    book book6("harry potter and the half blood prince",6);
    book6.title="harry potter and the half blood prince";
    book6.author="jk rowling";
    book6.genre="fantasy novel";
    book6.page=652;
    book6.pubdate=2005;

    book book7("harry potter and the deathly hallows",7);
    book7.title="harry potter and the deathly hallows";
    book7.author="jk rowling";
    book7.genre="fantasy novel";
    book7.page=759;
    book7.pubdate=2007;

    while(true){
    cout<<"\nenter the book number:";
    cin>>booknum;
    cout<<endl;

    switch(booknum)
    {
        case 1:


    cout<<"title : "<<book1.title<<endl;
    cout<<"author: "<<book1.author<<endl;
    cout<<"genre : "<<book1.genre<<endl;
    cout<<"pages : "<<book1.page<<endl;
    cout<<"year  : "<<book1.pubdate<<endl;

    break;

        case 2:
    cout<<"title : "<<book2.title<<endl;
    cout<<"author: "<<book2.author<<endl;
    cout<<"genre : "<<book2.genre<<endl;
    cout<<"pages : "<<book2.page<<endl;
    cout<<"year  : "<<book2.pubdate<<endl;
    break;
        case 3:
    cout<<"title : "<<book3.title<<endl;
    cout<<"author: "<<book3.author<<endl;
    cout<<"genre : "<<book3.genre<<endl;
    cout<<"pages : "<<book3.page<<endl;
    cout<<"year  : "<<book3.pubdate<<endl;
    break;
      case 4:
    cout<<"title : "<<book4.title<<endl;
    cout<<"author: "<<book4.author<<endl;
    cout<<"genre : "<<book4.genre<<endl;
    cout<<"pages : "<<book4.page<<endl;
    cout<<"year  : "<<book4.pubdate<<endl;
    break;
      case 5:
    cout<<"title : "<<book5.title<<endl;
    cout<<"author: "<<book5.author<<endl;
    cout<<"genre : "<<book5.genre<<endl;
    cout<<"pages : "<<book5.page<<endl;
    cout<<"year  : "<<book5.pubdate<<endl;
    break;
      case 6:
    cout<<"title : "<<book6.title<<endl;
    cout<<"author: "<<book6.author<<endl;
    cout<<"genre : "<<book6.genre<<endl;
    cout<<"pages : "<<book6.page<<endl;
    cout<<"year  : "<<book6.pubdate<<endl;
    break;
      case 7:
    cout<<"title : "<<book7.title<<endl;
    cout<<"author: "<<book7.author<<endl;
    cout<<"genre : "<<book7.genre<<endl;
    cout<<"pages : "<<book7.page<<endl;
    cout<<"year  : "<<book7.pubdate<<endl;
    break;
        default:
            cout<<"the book is not yet registered"<<endl;
    }}
    return 0;
}
