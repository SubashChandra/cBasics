#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	const char *s1 = "good apple";
	const char *s2 = "good mango";
	const char *s3 = "good zamon";

	printf("strings are s1 = %s\ns2 = %s\ns3 = %s\n\n",s1,s2,s3);

	printf("strcmp(s1,s2) is %d\n",strcmp(s1,s2));
	printf("strcmp(s3,s2) is %d\n",strcmp(s3,s2));
	printf("strcmp(s1,s3) is %d\n\n",strcmp(s1,s3));

	printf("strncmp(s1,s2,6) is %d\n",strncmp(s1,s2,6));
	printf("strncmp(s2,s3,4) is %d\n",strncmp(s2,s3,4));
	printf("strncmp(s3,s1,6) is %d\n",strncmp(s3,s1,6));

	return 0;
}





