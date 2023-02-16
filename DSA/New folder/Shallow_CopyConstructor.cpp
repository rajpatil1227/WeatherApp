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

    void print()
    {
        cout<<endl<<this->name<<endl;
    }
    
};

int main()
{
    Property a;
    char name[10]="Virat";
    a.setName(name);
    a.print();

    Property b(a);
    b.print();

    a.name[0]='B';

    a.print();
    b.print();

    return 0;
}