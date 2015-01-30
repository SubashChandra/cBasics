#include<stdio.h>

int main(void)
{
	int score;

	printf("enter u score to get ur grade\n");

	scanf("%d",&score);

	if (score >=90 )
	{
		printf("A grade\n");
	}
	else if (score>= 80)
	{
		printf("B grade\n");
	}
	else if (score >= 70)
	{
		printf("C grade\n");
	}
	else if (score>= 60)
	{
		printf("D grade\n");
	}
	else 
	{
		printf("F grade\n");
	}

	return 0;
}
