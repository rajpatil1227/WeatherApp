#include<iostream>
using namespace std;
class ABC  {	
	int a;				// Private section
	public:
	void getdata()			// Public Declarations
	{
		cout<<"Give the value of a is ";
		cin>>a;
	}
	
	friend void display() ;
};
void display(int a)
{
	cout<<"a= "<<a;
}
int main ()
{
	int a;
	ABC obj;
	obj.getdata();
	display(a);
}
