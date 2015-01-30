#include<stdio.h>
int state = 1;

void palindrome(char a[],int start,int end)
{
	if(a[start] == a[end] && start <=end)
	{
		palindrome(a,start+1,end-1);
	}
	else if(a[start] != a[end])
	{
		state =0;
		return;
	}
	return;
}


void main(void)
{
	int n,i;

	printf("enter the string length\n");
	scanf("%d",&n);

	char a[n+1];
	scanf("%s",a);

	palindrome(a,0,n-1);

	if(state ==1)
	{
		printf("string %s is a palindrome\n",a);
	}

	else
	{
		printf("string %s is not a palindrome\n",a);
	}
}
