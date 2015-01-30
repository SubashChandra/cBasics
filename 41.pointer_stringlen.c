#include<stdio.h>

int stringlen(const char *s)
{
	int x;

	for (x=0; *s!= '\0';s++)
	{
		x++;
	}

	return x;
}

int main(void)
{
	char a[50];

	printf("enter a string\n");
	scanf("%s",a);

	printf("length of string %s is %d\n",a,stringlen(a));

	return 0;
}
