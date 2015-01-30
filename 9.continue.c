#include<stdio.h>

int main(void)
{
	int i;

	for (i=1; i <=10; i++)
	{
		if(i==6)
		{
			printf("skipped %d ",i);
			continue;
		}

		printf("%d ",i);
	}

	printf("\n");

	return 0;
}
