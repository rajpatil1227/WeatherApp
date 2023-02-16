#include <stdio.h>
int main()
{
  int a,b,c;
  printf("1st number");
  scanf("%d",&a);
  printf("2nd number");
  scanf("%d",&b);
  c=a;
  a=b;
  b=c;
  printf("After swipping %d %d",a,b);
}
