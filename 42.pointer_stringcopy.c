#include<stdio.h>

void strcopy(char *s1,char *s2)
{
	while(*s1 != '\0')
	{
		s1++;
	}

	for ( ;(*s1 = *s2)!='\0';s1++,s2++)
	{
		;
	}
	return;
}


int main(void)
{
	char string[80];
	char string1[80];

	printf("enter two strings\n");
	scanf("%s %s", string,string1);

	strcopy(string,string1);

	printf("resulting string:%s\n",string1);

	return 0;
}


