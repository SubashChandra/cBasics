#include<stdio.h>

int main(void)
{
	int a;
	int b;
	int sum;

	printf("enter first integer:\n");
	scanf("%d",&a);

	printf("enter second integer:\n");
	scanf("%d",&b);

	sum = a + b;

	printf("sum is: %d\n",sum);

	return 0;
}
