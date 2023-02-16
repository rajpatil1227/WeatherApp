#include <iostream>
using namespace std;
class calc
{
	int x,y,z;					// Private section
	public:
		int add(int x,int y,int z=10)		// Public Declarations
		{
			return (x+y+z);		
		}
	protected:
						// Protected Declarations
};
int main()
{
	int x,y,z;
	calc obj;
	obj.add(x,y,z);
	cout<<"Sum="<<obj.add(10,10);
	cout<<"\nSum="<<obj.add(10,10,20);
}

