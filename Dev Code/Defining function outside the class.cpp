#include <iostream>
using namespace std;
class sample
{
	private:
		int x,y;
	public:
		void getdata(int,int);
		void putdata(void);
};

void sample :: getdata (int p,int q)
{
	x=p;
	y=q;
}
void sample :: putdata ()
{
	cout<<"value of x = "<<x;
	cout<<"\nvalue of y = "<<y;
}

int main()
{
	sample s;
	s.getdata(5,10);
	s.putdata();
}
