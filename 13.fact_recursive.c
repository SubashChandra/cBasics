//fact(0) =1 ; fact(1) = 1
//fib is ....

#include<stdio.h>

long fact(long n);

int main(void)
{
	long result;
	long n;

	printf("enter a number:\n");
	scanf("%ld",&n);

	result = fact(n);
	printf("fact(%ld) is %ld\n",n,result);

	return 0;

}

long fact(long n)
{

	if (n<=1)
	{
		return 1;
	}

	else
	{
		return (n * fact(n-1));
	}
}
