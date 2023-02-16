#include <stdio.h>
struct student
{
	int roll[5],m[5],total;
	float per;
};
int main()
{
	int i,c;
	struct student s[100];
	
	for(i=1;i<=5;i++)
	{
	scanf("%d",&s[i].m[i]);
	printf("Marks of subject m%d are %d\n",i,s[i].m[i]);
	}
	
}
