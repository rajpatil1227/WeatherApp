#include<stdio.h>
int main()
{
	int arr[]={8,9,7,3,1,2,6},temp;
	printf("Given array is :\n");
	for(int i=0;i<=6;i++) 
	{
		printf("%d ",arr[i]);
	}
	for(int i=0;i<=6;i++) 
	{
		for(int j=i+1;j<=6;j++) 
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}

	}
	
	printf("\nArray sorted in ascending order :\n");
	for(int i=0;i<=6;i++) 
	{
		printf("%d ",arr[i]);
	}

}
