#include<stdio.h>

int state = 0;

void rec_binary( int a[], int key, int low, int high)
{
	int middle;
	middle = (low+high)/2;

	if(a[middle] == key)
	{
		state =1;
		return;
	}

	else if( key < a[middle] && low <= high)
	{
		rec_binary(a,key,low,middle-1);
	}

	else if( key > a[middle] && low <= high)
	{
		rec_binary(a,key,middle+1,high);
	}

	return;
}

void main(void)
{
	int n,i,key;
	printf("enter the array size\n");
	scanf("%d",&n);

	int a[n];

	printf("enter the array elements\n");
	for(i=0; i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("enter key\n");
	scanf("%d",&key);

	//sort in order
	int pass,temp;
	for(pass =0; pass<n-1;pass++)
	{
		for(i =0; i<n-1; i++)
		{
			if(a[i] > a[i+1])
			{
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}

	rec_binary(a,key,0,n-1);

	if(state ==1)
	{
		printf("key %d found\n",key);
	}

	else
	{
		printf("key %d not found\n",key);
	}
}
