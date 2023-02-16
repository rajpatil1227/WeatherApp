#include <stdio.h>
void knapsack(int n, float wt[], float prog[], float capacity)
{
	float arr[20], tp = 0;
	int i, j, u;
	u = capacity;
	for (i = 0; i < n; i++)
	arr[i] = 0.0;
	for (i = 0; i < n; i++)
{
	if (wt[i] > u)
	break;
	else
	{
	arr[i] = 1.0;
	tp = tp + prog[i];
	u = u - wt[i];
	}
}
if (i < n)
arr[i] = u / wt[i];
tp = tp + (arr[i] * prog[i]);
printf("\nThe Result Vector is:- ");
for (i = 0; i < n; i++)
printf("%f\t", arr[i]);
printf("\nMaximum Prog is:- %f", tp);

}
int main()
{
float wt[20], prog[20], capacity;
int num, i, j;
float ratio[20], temp;

printf("\nEnter the no. of Objects:- ");
scanf("%d", &num);

printf("\nEnter the wts and progs of each object:- ");
for (i = 0; i < num; i++)
{
scanf("%f %f", &wt[i], &prog[i]);
}

printf("\nEnter the capacity of knapsack:- ");
scanf("%f", &capacity);

for (i = 0; i < num; i++)
{
ratio[i] = prog[i] / wt[i];
}

	for (i = 0; i < num; i++)
	{
	for (j = i + 1; j < num; j++)
	{
		if (ratio[i] < ratio[j])
		{
		temp = ratio[j];
		
		ratio[j] = ratio[i];
		ratio[i] = temp;
		
		temp = wt[j];
		wt[j] = wt[i];
		wt[i] = temp;
		
		temp = prog[j];
		prog[j] = prog[i];
		prog[i] = temp;
	}
	}
}


