#include<stdio.h>

#include<stdlib.h>

int main (void)
{
	char x[] = "happy new year to u";
	char y[25];
	char z[15];

	printf("array y is %s\n",strcpy(y,x));

	strncpy(z,x,14);
	z[14] ='\0';

	printf("\narray z is %s\n",z);

	return 0;
}
