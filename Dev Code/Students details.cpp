#include <stdio.h>
int main()
{
	int a[3],i,j,b;
	float per;
	
	b=0;
	for(i=0;i<=2;i++) 
	{
		printf("Student %d\n",i+1);
		for(j=0;j<=2;j++)
		{	
		scanf("%d",&a[j]);
		b=b+a[j];
		per=b/3;
		}printf("Total score of student %d is: %d\n",i+1,b);
		printf("Percentage of student %d is:%f\n\n",i+1,per);
	}
	
}
