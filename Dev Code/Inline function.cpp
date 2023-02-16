#include <iostream>
using namespace std;
inline int max(int x,int y)	//inline use//to reduce running time for small codes
{
	return ((x>y)?x:y);
}
int main()				
{
	int x,y;
	cout<<"Enter any 2 no.s\n";
	cin>>x>>y;
	cout<<"Max no. is = "<<max(x,y);
}
