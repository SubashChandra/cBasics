#include<stdio.h>

int state = 0;
int location =0;

void rec_linear(int a[],int key,int low,int high)
{
	if(key == a[low])
	{
		state =1;
		location = low;
		return;
	}

	else if(key != a[low] && low<=high)
	{
		rec_linear(a,key,low+1,high);
	}
	return;
}

void main(void)
{

	int n,i,key;

	printf("enter the array size\n");
	scanf("%d", &n);

	int a[n];

	printf("enter array elements\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("enter key\n");
	scanf("%d",&key);

	rec_linear(a,key,0,n-1);

	if(state == 1)
	{
		printf("key %d found at %d\n",key,location);
	}

	else
	{
		printf("key not found\n");
	}
}


