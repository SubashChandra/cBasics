#include<stdio.h>

int cubebyvalue(int i)
{
	return i*i*i;
}

int main(void)
{
	int n=5;
	printf("original value is %d\n",n);
	n = cubebyvalue(n);

	printf("cube by value is %d\n",n);

	return 0;
}
