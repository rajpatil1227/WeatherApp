#include <stdio.h>
int main()
{
	FILE *ptr = NULL;
	ptr = fopen ("ABCD.cpp", "w");
	char c;
	fputc('o',ptr);
	
	/*fgets(s,4,ptr);
	printf("String is %s\n",s);
	fgets(s,7,ptr);
	printf("String is %s",s);
	fclose(ptr);*/
	
	//ptr = fopen ("ABCD.cpp", "w");
	//fputc('o',ptr);
	
	
	return 0;
}
