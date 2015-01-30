#include<stdio.h>

int binarysearch(int a[],int key,int low,int high)
{
	int middle;

	while(low <= high)
	{
		middle = (low+high)/2;

		if(key == a[middle])
		{
			return middle;
		}

		else if (key < a[middle])
		{
			high = middle -1;
		}

		else if (key > a[middle])
		{
			low = middle +1;
		}
	}
}




void main(void)
{
	int n;
	printf("enter the array size\n");
	scanf("%d",&n);

	printf("enter the sorted array elements\n");
	int i,a[n];

	for (i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}

	printf("enter the key to be searched\n");
	int key;
	scanf("%d",&key);

	int result;
	result = binarysearch(a,key,0,n-1);

	if(result != -1)
	{
		printf("key %d found at location %d\n",key,result);
	}
	else
	{
		printf("key not found\n");
	}
}

