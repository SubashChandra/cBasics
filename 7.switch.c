#include<stdio.h>

int main(void)
{
	int alph;
	int acount=0, bcount=0, ccount=0;

	printf("enter a,b,or c, get the final count\n");

	while((alph = getchar()) != EOF)
	{
		switch(alph)
		{
			case 'a':
			case 'A':
				++acount;
				break;

			case 'b':
			case 'B':
				++bcount;
				break;

			case 'c':
			case 'C':
				++ccount;
				break;

			case '\n':
			case '\t':
			case ' ':
				break;
			default:
				printf("enter either a,b or c\n");
				break;
		}
	}

	printf("no or a,b,nd c's are:\n");
	printf("no of a's: %d\nno of b's: %d\nno of c's: %d\n",acount,bcount,ccount);

	return 0;
}

