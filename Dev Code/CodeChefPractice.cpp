#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k=0;
		scanf("%d",&n);
		char a[n];
		for(int i=0 ;i<n;i++)
		{
			if(a[i]=='c'||a[i]=='g' || a[i]=='h' || a[i]=='g' || a[i]=='k' || a[i]=='l'|| a[i]=='m'|| a[i]=='r')
			{
				k=k*2;	
			}
		}
		printf("%d\n",k)
  	}

}



