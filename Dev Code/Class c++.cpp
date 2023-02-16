#include <iostream>
using namespace std;
class  addition
{
	private:
		int x;
		int y;
		int z;
	public:
		void input ()
		{
			cout <<"Enter two integers\n";
			cin >>x>>y;
		}
		void output ()
		{
			z=x+y;
			cout <<"Addition= "<<z;
		}
	
	protected:
		// Protected Declarations
};

int main()
{
	addition obj;
	obj.input();
	obj.output();
}

