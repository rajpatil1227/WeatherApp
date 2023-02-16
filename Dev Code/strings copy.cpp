#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char s1[10],s2[10];
	cout<<"Enter 1st string\n";
	cin>>s1;
	cout<<"Enter 2nd string\n";
	cin>>s2;
	strcpy (s2,s1);
	puts(s2);
}
