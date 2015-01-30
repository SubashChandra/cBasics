//doesn't handle a tie
#include<stdio.h>

int main(void)
{
	int i,n,mode;

	printf("enter n value\n");
	scanf("%d",&n);

	int a[n],c[10] ={0};

	printf("enter values between 0 to 9\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		++c[a[i]];
	}

	mode = 0;
	for (i=1;i<10;i++)
	{
		if(c[i]>c[mode])
		{
			mode = i;
		}
	}

	printf("mode is %d\n",mode);
}



