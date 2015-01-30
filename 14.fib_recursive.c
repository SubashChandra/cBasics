//0 1 1 2 3 5 8 13 21 34 55 ....
//fib(0) = 0; fib(1) = 1;

#include<stdio.h>

long fib(long n);

int main(void)
{
	long result;
	long n;
	int i;

	printf("enter a number\n");
	scanf("%ld",&n);
	printf("fib series till fib(%ld) is: \n",n);

	for (i=0;i<=n;i++)
	{
		result = fib(i);

		printf("fib(%d) is %ld\n", i,result);
	}
	return 0;
}

long fib(long n)
{

	long temp;

	if (n == 0 || n == 1)
	{
		return n;
	}

	else
	{
		temp = fib(n-1) + fib(n-2);
		return temp;
	}
}

