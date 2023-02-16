#include<iostream>
using namespace std;
class A {
		// Private section
		int a;
	public:
		// Public Declarations
		void getdata ()
		{
			cout<<"a= ";
			cin>>a;
		}
	protected:
		// Protected Declarations
};
friend class B {
		// Private section
		int x;
	public:
		// Public Declarations
		void show(ax)
		{
			cout<<"a= "<<x.a;
		}
	protected:
		// Protected Declarations
};
int main()
{
	A OA;
	B OB;
	
	OA.getdata();
	OB.show();
	
}



