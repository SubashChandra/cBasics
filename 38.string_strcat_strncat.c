#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char a[20] = "happy ";
	char b[] = "new year ";
	char c[50] = "";

	printf("string a is %s\n\n",strcat(a,b));

	printf("strncat(c,a,6) is :%s\n\n", strncat(c,a,6));

	printf("strcat(c,a) is : %s\n\n",strcat(c,a));

	return 0;
}
