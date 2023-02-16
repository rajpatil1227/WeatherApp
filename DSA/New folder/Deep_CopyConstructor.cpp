#include <bits/stdc++.h>
using namespace std;

class Property
{
    public:
    char *name;

    Property()
    {
        name= new char[100];
    }

    void setName(char name[])
    {
        strcpy(this->name,name);
    }   
  
    Property(Property& temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch,temp.name);
        this->name=ch; 
    }

    void getName()
    {
        cout<<endl<<this->name<<endl;
    }
    
};

int main()
{
    Property a;
    char name[10]="Virat";
    a.setName(name);

    Property b(a);
    
    a.getName();
    b.getName();

    a.name[0]='B';

    a.getName();
    b.getName();

    return 0;
}