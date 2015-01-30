#include<stdio.h>

int main(void)
{
	int n,i,pass;

	printf("enter n value\n");
	scanf("%d",&n);
	
	double a[n];
	double median,temp;

	printf("enter the values\n");

	for(i = 0;i<n;i++)
	{
		scanf("%lf",&a[i]);
	}

	for(pass =0; pass<n-1; pass++)
	{
		for(i=0; i<n-1;i++)
		{
			if ((int)a[i]>(int)a[i+1])
			{
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}
	
	printf("sorted array:\n");

	for(i=0;i<n;i++)
	{
		printf("%f ",a[i]);
	}
	printf("\n");


	if (n%2 !=0)
	{
		median = a[(n)/2];
	}
	else
	{
		median = (a[(n/2)-1] + a[n/2])/2;
	}

	printf("median is %.2f\n",median);
}

