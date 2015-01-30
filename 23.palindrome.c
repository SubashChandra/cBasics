#include<stdio.h>

int main(void)
{
	int state = 1,n,i;

	printf("enter the length of the string\n");
	scanf("%d",&n);
	char a[n+1];
	scanf("%s",a);

	for(i=0;i<n/2 ;i++)
	{
		if(a[i] != a[n-i-1])
		{
			state =0;
			break;
		}
		else
		{
			continue;
		}

	}

	if(state == 1)
	{
		printf("string %s is a palindrome\n",a);
	}
	else
	{
		printf("string %s is not a palindrome\n",a);
	}
}
