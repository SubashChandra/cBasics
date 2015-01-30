#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double d;

	d = atof("99.6");

	printf("the string %s is converted to double %.3f\n","99.6",d); 
	printf("double %.3f by 2 is %.3f\n",d,d/2);

	return 0;
}
