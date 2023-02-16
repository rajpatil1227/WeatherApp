#include <stdio.h>
#include<stdlib.h>

struct item{
	int weight,cost;
	float cpw;
};

int main()
{
	int i,j,capacity,n;
	float vector[n] , profit=0;
	struct item arr[n];
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("Enter the capacity of sack: ");
	scanf("%d",&capacity);
	printf("Enter cost and weight: ");
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&arr[i].cost,&arr[i].weight);
		arr[i].cpw=((float)arr[i].cost/(float)arr[i].weight);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j].cpw<arr[j+1].cpw)
			{
				struct item temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp; 
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(arr[i].weight<=capacity)
		{
			profit = profit + arr[i].cost;
			capacity = capacity - arr[i].weight;
			vector[i]=1;
		}
		else
		{
			break;
		}
	}
	
	if(capacity != 0)
	{
		float fraction = ((float)capacity)/((float)arr[i].weight);
		profit = profit + fraction*arr[i].cost;
		vector[i]=fraction;
	}
	printf("Total profit: %.2f\n",profit);
	for(j=0;j<=i;j++)
	{
		printf("%.3f \t",vector[j]);
	}
}
