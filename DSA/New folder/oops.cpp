#include <iostream>
using namespace std;

class Hero
{
    int length;
    char ch;

    public:

    Hero() 
    {
        cout<<endl<<"Constructor Called"<<endl;
    }

    //Copy Constructor
    Hero(Hero& temp)
    {
        cout<<endl<<"Copy Consructor called"<<endl;
    }

    //parameterised
    Hero(int length)
    {
        this->length=length;
        cout<<endl<<"Length: "<<length<<endl;
    }
    
    int getLength()
    {
        return length;
    }

    char getChar()
    {
        return ch;
    }

    void setLength(int l)
    {
        length=l;
    }

    void setChar(char c)
    {
        ch=c;
    }

};

int main()
{
    //Static Allocation
    cout<<endl<<"For a: ";
    Hero a;

    //Dynamic allocation
    cout<<endl<<"For b: ";
    Hero *b= new Hero(100);

    a.setLength(18);
    a.setChar('V');

    b->setLength(7);
    b->setChar('D');

    cout<<endl<<a.getLength();
    cout<<endl<<a.getChar();

    cout<<endl;

    //cout<<endl<<(*b).getLength();
    //cout<<endl<<(*b).getChar();
    //or

    cout<<endl<<b->getLength();
    cout<<endl<<b->getChar();

    cout<<endl;
    
    // //Copy Constructor
     Hero Copy(a);
    // cout<<endl<<"Copy Constructor values: ";
    // cout<<endl<<Copy.getLength();

    return 0;
}