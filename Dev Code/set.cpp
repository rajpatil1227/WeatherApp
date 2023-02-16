#include<stdio.h>
int main()
{
	int i,j,a[20],b[20],c[20],d[20],k=0,n1,n2;
  char choice;
	
	printf("Enter the number of elements in set A :");
	scanf("%d",&n1);
	
	printf("Enter the number of elements in set B :");
	scanf("%d",&n2);
	
	printf("\n\nSet A :\n");
	for(i=0;i<n1;i++) 
	{
		printf("Element %d of set A is :",(i+1));
		scanf("%d",&a[i]);
	}
	
	printf("\n\nSet B :\n");
	for(i=0;i<n2;i++) 
	{
		printf("Element %d of set B is :",(i+1));
		scanf("%d",&b[i]);
	}
	
printf("\n");
	for(i=0;i<n1;i++) 
	{
		c[i]=a[i];
	}
	
	for(i=0;i<n2;i++) 
	{
		c[n1+i]=b[i];
	}

printf("\n\nUnion of Set A and Set B :\n");
	for(i=0;i<(n1+n2);i++) 
	{
		k=0;
		for(j=i+1;j<(n1+n2);j++)
		{
			if(c[j]==c[i])
			{
				k=1;
				break;
			}
		}
			if(k==0)
			{
				printf("%d ",c[i]);
			}
	}

  printf("\n\nIntersection of Set A and Set B :\n");
	for(i=0;i<(n1+n2);i++) 
	{
		k=0;
		for(j=i+1;j<(n1+n2);j++)
		{
			if(c[j]==c[i])
			{
       				k=0;
				printf("%d ",c[i]);
			}
      
		}
			if(k==1)
			{
				break;
		  	}
			
	}

    printf("\n\nA-B :\n");
	  for(i=0;i<n1;i++) 
		{
			k=0;
			for(j=0;j<n2;j++)
			{
				if(a[i]==b[j])
				{
	      				k=1;
					break;
				}
	      
			}
				if(k==0)
				{
					printf("%d ",a[i]);
        }
    }
    

    printf("\n\nB-A :\n");
	  for(i=0;i<n2;i++) 
		{
			k=0;
			for(j=0;j<n1;j++)
			{
				if(b[i]==a[j])
				{
	      				k=1;
					break;
				}
	      
			}
				if(k==0)
				{
					printf("%d ",b[i]);
	      }
    }	

  printf("\n\nSymmetric difference of Set A and Set B :\n");
	for(i=0;i<n1;i++) 
	{
		k=0;
		for(j=0;j<n2;j++)
		{
			if(b[j]==a[i])
			{
				k=1;
				break;
			}
		}
			if(k==0)
			{
				printf("%d ",a[i]);
			}
			
	}
	
	for(i=0;i<n2;i++) 
	{
		k=0;
		for(j=0;j<n1;j++)
		{
			if(a[j]==b[i])
			{
				k=1;
				break;
			}
		}
			if(k==0)
			{
				printf("%d ",b[i]);
			}
			
	}
} 
