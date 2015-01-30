#include<stdio.h>

int find(const char *a1,const char *a2)
{
	for(  ; *a1!= '\0' || *a2 != '\0';a1++,a2++)
	{
		if (*a1 != *a2)
		{
			return 0;
		}
	}

	return 1;
}

int main(void)
{
	char s1[50],s2[50];

	printf("enter two strings\n");

	scanf("%s %s",s1,s2);

	printf("the result is: %s\n",(find(s1,s2)==1 ?"strings are same":"strings are different" ));

	return 0;
}
