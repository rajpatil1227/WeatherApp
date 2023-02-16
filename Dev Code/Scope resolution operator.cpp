#include <iostream>
using namespace std;
int x=20; 				//global 
int main()
{
	int x=10; 			// local
	cout<<x<<endl;		//will print x=10
	cout<<::x<<endl;		//will print x=20
	{
		int x=30;		
		cout<<x<<endl;	//will print x=30
		cout<<::x<<endl;	//will print x=20
	}
	cout<<x;			//will print x=10
}
