#include<stdio.h>
int main()
{
     int i,a,b;	
     printf("Enter a number");
     scanf("%d",&b);
     i=1;
     a=1;
     do
     {
     	
     	a=a*i;
     	i=i+1;
     	
     }
     while(i<=b);
     printf("Factorial:%d",a);
}
