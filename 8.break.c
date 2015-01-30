#include<stdio.h>

int main(void)
{
	int i;

	for (i=1; i<=10; i++)
	{
		if(i==5)
		{
			break;
		}
		printf("%d ",i);
	}

	printf("\nloop broke at x= %d\n",i);

	return 0;
}
