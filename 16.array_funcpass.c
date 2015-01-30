#include<stdio.h>

void modifyarray(int b[], int size)
{
	int i;
	for (i =0; i<size;i++)
	{
		b[i]*=2;
	}
}

void main(void)
{

	int a [5] = {0,1,2,3,4};

	int i;

	printf("array before func pass:\n");

	for (i =0; i<5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");

	modifyarray(a,5);

	printf("array after func pass:\n");

	for (i =0; i<5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");

}
