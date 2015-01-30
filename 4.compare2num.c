#include<stdio.h>

int main()
{
	int a;
	int b;

	printf("enter two numbers plz:\n");
	scanf("%d %d",&a,&b);

	if (a >= b)
	{ 
		printf("number %d is greater than or equal to %d\n",a,b);
	}

	if (a <= b)
	{
		printf("number %d is less than or equal to %d\n",a,b);
	}

	if (a == b)
	{
		printf("number %d is equal to number %d\n",a,b);
	}

	return 0;
}

