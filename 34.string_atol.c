#include<stdio.h>
#include<stdlib.h>

int main()
{
	long l;

	l = atol("100000000");

	printf("the string %s converted to long int %ld\n","1000000",l);
	printf("long int %ld /5 is %ld\n",l,l/5);

	return 0;
}
