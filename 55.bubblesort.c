#include<stdio.h>

void bubblesort(int a[],int n)
{
	int j,pass,temp;

	for(pass =0; pass < n-1;pass++)
	{
		for(j=0; j< n-1;j++)
		{
			if(a[j] >a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}


int main(void)
{
	int i,n;
	printf("enter array size:\n");

	scanf("%d",&n);
	int a[n];

	printf("enter array values\n");
	for (i =0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("original array:\n");

	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}

	printf("\n");

	bubblesort(a,n);

	printf("sorted array:\n");

	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}

	printf("\n");

}
