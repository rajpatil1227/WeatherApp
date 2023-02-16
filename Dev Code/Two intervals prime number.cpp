#include<stdio.h>
int main()
{
	int i,j,n1,n2,flag;
	printf("Enter two intervals\n");
	scanf("%d %d",&n1,&n2);
	printf("Prime numbers between %d and %d are:\n",n1,n2);
	for(i=n1+1;i<n2;i++)
	{
	   	flag=0;
	   	for(j=2;j<i;j++)
	   	{
	   	if(i%j==0)
		{
		        //printf("number is not prime");
		        flag=1;
	        	break;
		}
	   	}
	
 
	    if(flag==0)
 	    {
 	            printf("%d  ",i);	
	    }
	}  
	return 0;
}
