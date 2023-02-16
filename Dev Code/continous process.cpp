#include <stdio.h>

void address ()
{
    int a,b,c;
    printf("Enter two numbres\n");
    scanf("%d %d",&a,&b);
      c=a+b;
	printf("Addition is %d\n",c);
	
}
int main()
{

	int d,i;
	
	
    for(i=1;1<10;i++) 
    {
          address();
	        printf("\nDo you want to continue:");
	        scanf("%d\n",&d);
	if(d>1)
	{
	      break ;
	}
	
    }
}


 
