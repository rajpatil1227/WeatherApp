#include <iostream>
#include <string.h>
using namespace std;
class sample
{
	int m,a,b;					
	public:
		int line(int a)		
		{
			cout<<"______";
			return a;
		}				
};
		
int main()
{
	int m,a;
	
	sample obj;
	obj.line(1);
	//cout<<obj.line(a);
	cout<<"\nMarks= ";
	cin>>m;
}
