#include <stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("Enter three digit number");
	scanf("%d",&a);
	b=a/100;
	c=a%100;
	d=c/10;
	e=c%10;
	switch(b)
	{
		case 1: printf("One Hundred");
		break;
		case 2: printf("Two Hundred");
		break;
		case 3: printf("Three Hundred");
		break;
		case 4: printf("Four Hundred");
		break;
		case 5: printf("Five Hundred");
		break;
		case 6: printf("Six Hundred");
		break;
		case 7: printf("Seven Hundred");
		break;
		case 8: printf("Eight Hundred");
		break;
		case 9: printf("Nine Hundred");
		break;
		default:printf("Error");
		
		
	}
	if(c>=10&&c<=19)
{
      switch(c)
{
case 10:printf(" ten");
break;	        
case 11:printf(" eleven");
break;
case 12:printf(" twelve");
break;
case 13:printf(" thirteen");
break;    
case 14:printf(" fourteen");
break;
case 15:printf(" fifteen");
break;
case 16:printf(" sixteen");
break;
case 17:printf(" seventeen");
break;
case 18:printf(" eighteen");
break;
case 19:printf(" nineteen");
break;
default:printf("");
}

}
else

{
switch(d)
{
case 2:printf("twenty");
break;
case 3:printf("thirty");
break;
case 4:printf("forty");
break;
case 5:printf("fifty");
break;
case 6:printf("sixty");
break;
case 7:printf("seventy");
break;
case 8:printf("eighty");
break;
case 9:printf("ninety");
break;
default:printf("");
}
switch(e)
{
case 1:printf(" one");
break;
case 2:printf(" two");
break;
case 3:printf(" three");
break;
case 4:printf(" four");
break;
case 5:printf(" five");
break;
case 6:printf(" six");
break;
case 7:printf(" seven");
break;
case 8:printf(" eight");
break;
case 9:printf(" nine");
break;
default:printf("");
}
}
return 0;
}

