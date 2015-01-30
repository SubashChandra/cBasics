
#include<stdio.h>

int main(void)
{

	int n;
	printf("enter the number of elements\n");

	scanf("%d",&n);

	int i;
	double sum =0;
	double a[n];
	printf("enter the values:\n");

	for (i=0;i<n;i++)
	{
		scanf("%lf",&a[i]);
		sum+=a[i];
	}

	printf("mean is %.2f\n",(sum/n));
}
