#include<stdio.h>
#include<stdlib.h>

int main(void)
{

	char s[50];

	printf("enter a string to find its lenght:\n");

	gets(s);

	printf("strlen(%s) is : %d\n",s,(int)strlen(s));

	return 0;
}
