#include<stdio.h>

void cubebyreference(int *i)
{
	*i = *i * *i * *i;
	return;
}

int main(void)
{
	int n =5;

	printf("original value %d\n",n);

	cubebyreference(&n);

	printf("value after call by reference is %d\n",n);

	return 0;
}
