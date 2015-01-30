#include<stdio.h>

int max(int x,int y, int z)
{
	int max =x;

	if (y>max)
	{
		max = y;
	}

	if (z>max)
	{
		max = z;
	}

	return max;
}

int main(void)
{
	int a,b,c;

	printf("enter 3 integers to find their max:\n");

	scanf("%d %d %d",&a,&b,&c);
	

	printf("maximum is: %d\n",max(a,b,c));

	return 0;
}
