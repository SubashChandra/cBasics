#include<stdio.h>

main()
{
	char a[50];

	printf("enter a string:\n");
	scanf("%s",a);

	int count;
	printf("\nstring is:\n");

	for(count =0 ; *(a+count) != '\0';count++)
	{
		printf("%c",*(a+count));
	}
	printf("\n");
}
