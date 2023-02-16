#include <iostream>
using namespace std;

int add(int x=20,int y=20,int z=10)
{
	return (x+y+z);
}

int main()
{
	cout<<"Sum="<<add(10,100);			//Sum=120
	cout<<"\nSum="<<add(10,10,10);			//Sum=30
	cout<<"\nSum="<<add(10);			//Sum=40
}
