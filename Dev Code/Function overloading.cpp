#include <iostream>
using namespace std;
int area(int x,int y)
{
	cout<<"Area of rectangle = "<<x*y;
}
int area(int x)
{
	cout<<"\nArea of square = "<<x*x;
}
int area(double x)
{
	cout<<"\nArea of circle = "<<(3.14*2*x);	
}

int main()
{
	area(4,5);
	area(4);
	area(7.0);
}

