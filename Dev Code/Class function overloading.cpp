#include <iostream>
using namespace std;
class calc  
{
	private:
		int a,b;
		double x,y;
	public:
		void getdata(double x,int a)
		{
			cout<<"Sum = "<<x+a;
		}
		void getdata(double x,double y)
		{
			cout<<"\nSum ="<<x+y;
		}
};
int main()
{
	calc obj;
	obj.getdata(5.2,5);
	obj.getdata(5.2,5.2);
}
