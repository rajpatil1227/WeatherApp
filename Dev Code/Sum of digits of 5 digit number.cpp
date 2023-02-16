#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,a,b,c,d,e,f,g,h;
    scanf("%d", &n);
    a=n/10000;
    b=n%10000;
    c=b/1000;
    d=b%1000;
    e=d/100;
    f=d%100;
    g=f/10;
    h=f%10;
    
     printf("%d",a+c+e+g+h);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}
