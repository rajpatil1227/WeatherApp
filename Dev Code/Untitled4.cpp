#include <stdio.h>

double avg(int *arr, int size)
{
	int i,sum=0;
	double average;
	for(i=0;i<size;i++)
	{
		sum+=arr[i];
		arr[i]++;
	}
	average = sum / size ;
	return average;
}

int main()
{
	double mean;
	int a[5] = {1,2,3,4,5};
	mean = avg(a, 5);
	printf("Mean = %lf",mean);
}
