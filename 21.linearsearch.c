#include<stdio.h>

void main(void)
{
	int n,i;
	int state = 0;

	printf("enter array size\n");
	scanf("%d",&n);

	int a[n];

	for(i=0; i<n ;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("enter key to be searched\n");
	int key;
	scanf("%d",&key);

	for(i =0;i<n;i++)
	{
		if (a[i] == key)
		{
			printf("key %d found at location %d\n",key,i);
			state =1;
			break;
		}
	}

	if(state ==0)
	{
		printf("key not found\n");
	}
}
