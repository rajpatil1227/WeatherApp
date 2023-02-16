#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct player
{
char name[20], country[20], category[20];
int odi, t20, wickets;
int age;
float bat_avg;
};
void accept(struct player p[5], int n);
void display(struct player p[5], int n);
void batsman(struct player p[5], int n);
void bowler(struct player p[5], int n);
void swap_float(float *a, float *b);
void swap_char(char *a, char *b);
void swap_int(int *a, int *b);
void avg_sco(struct player p[5], int n);
void highest_avg(struct player p[5], int n);
void max_wickets(struct player p[5], int n);
int main()
{
struct player p[5];
int option, n;
printf("Enter the number of players : ");
scanf("%d", &n);
do
{
printf("\n1. Create \n2. Display \n3. Number of Batsman of a Country \n4. Number of Bowler of a Country \n5. Highest Batting Average\n6.Highest wicket taker\n7. Sorted order of Batting average\n0. Exit");
printf("\nEnter the choice : ");
scanf("%d", &option);
switch (option)
{
case 1:
accept(p, n);
break;
case 2:
display(p, n);
break;
case 3:
batsman(p, n);
break;
case 4:
bowler(p, n);
break;
case 5:
highest_avg(p, n);
break;
case 6:
max_wickets(p, n);
break;
case 7:
avg_sco(p, n);
break;
default:
printf("Invalid input try again\n");
}
} while (option != 0);
}
void accept(struct player p[5], int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("\nEnter the name of player : ");
scanf("%s", p[i].name);
printf("Enter the Nation of player : ");
scanf("%s", p[i].country);
printf("Enter the age of player : ");
scanf("%d", &p[i].age);
printf("Enter the category of player : ");
scanf("%s", p[i].category);
printf("Enter the Number of ODI Matches played : ");
scanf("%d", &p[i].odi);
printf("Enter the Number of T-20 Matches played : ");
scanf("%d", &p[i].t20);
printf("Enter the Batting Average : ");
scanf("%f", &p[i].bat_avg);
printf("Enter the Number of Wickets taken : ");
scanf("%d", &p[i].wickets);
}
}
void display(struct player p[5], int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("\nPlayer Name : %s", p[i].name);
printf("\nNation : %s", p[i].country);
printf("\nAge : %d", p[i].age);
printf("\nCategory : %s", p[i].category);
printf("\nNumber of ODI Matches played : %d", p[i].odi);
printf("\nNumber of T-20 Matches played : %d", p[i].t20);
printf("\nBatting Average : %f", p[i].bat_avg);
printf("\nNumber of Wickets taken : %d\n", p[i].wickets);
}
}
void batsman(struct player p[5], int n)
{
char c[20];
printf("Enter Country Name : ");
scanf("%s", c);
int count = 0;
for (int i = 0; i < n; i++)
{
if (strcmp(c, p[i].country) == 0 && strcmp(p[i].category, "batsman") == 0)
count++;
}
printf("Number of Batsman in %s are %d\n", c, count);
}
void bowler(struct player p[5], int n)
{
char c[20];
printf("Enter Country Name : ");
scanf("%s", c);
int count = 0;
for (int i = 0; i < n; i++)
{
if (strcmp(c, p[i].country) == 0 && strcmp(p[i].category, "bowler") == 0)
count++;
}
printf("Number of Bowlers in %s are %d\n", c, count);
}
void highest_avg(struct player p[5], int n)
{
float temp = p[0].bat_avg;
int c;
for (int i = 0; i < n; i++)
{
if (p[i].bat_avg > temp)
{
temp = p[i].bat_avg;
c = i;
}
}
printf("Batsman %s has the highest batting average of %.2f\n", p[c].name, temp);
}
void max_wickets(struct player p[5], int n)
{
int temp = p[0].wickets;
int c;
for (int i = 0; i < n; i++)
{
if (p[i].wickets > temp)
{
temp = p[i].wickets;
c = i;
}
}
printf("Bowler %s has taken the maximum %d wickets\n", p[c].name, temp);
}
void swap_float(float *a, float *b)
{
float temp = *a;
*a = *b;
*b = temp;
}
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
void swap_char(char *a, char *b)
{
char *temp = (char *)malloc((strlen(a) + 1) * sizeof(char));
strcpy(temp, a);
strcpy(a, b);
strcpy(b, temp);
free(temp);
}
void avg_sco(struct player p[5], int n)
{
int i, j;
for (i = 0; i < n - 1; i++)
{
for (j = 0; j < n - i - 1; j++)
{
if (p[j].bat_avg > p[j + 1].bat_avg)
{
swap_float(&p[j].bat_avg, &p[j + 1].bat_avg);
swap_char(p[j].name, p[j + 1].name);
swap_char(p[j].country, p[j + 1].country);
swap_char(p[j].category, p[j + 1].category);
swap_int(&p[j].age, &p[j + 1].age);
swap_int(&p[j].odi, &p[j + 1].odi);
swap_int(&p[j].t20, &p[j + 1].t20);
swap_int(&p[j].wickets, &p[j + 1].wickets);
}
}
}
printf("Name \t Country \t Category \t Age \t ODI \t T-20 \t Wickets \t Bat-Avg\n");
for (i = 0; i < n; i++)
{
printf("%s \t %s \t\t %s \t %d \t %d \t %d \t %d \t\t %f\n", p[i].name, p[i].country, p[i].category, p[i].age, p[i].odi, p[i].t20,
p[i].wickets, p[i].bat_avg);
}
}

