#include<stdio.h>

int main(int argc, char *argv[])
{
	FILE *infileptr;
	FILE *outfileptr;

	int c;

	if(argc != 3)
	{
		printf("usage: filename infilename outfilename\n");
	}

	else
	{
		if((infileptr = fopen(argv[1],"r")) != NULL)
		{
			if((outfileptr = fopen(argv[2],"w")) != NULL)
			{
				while((c = fgetc(infileptr))!= EOF)
				{
					fputc(c,outfileptr);
				}
			}
			else
			{
				printf("file \"%s\" could not be opened\n",argv[2]);
			}

		}
		else
		{
			printf("file \"%s\" could not be opened\n",argv[1]);
		}

	}
	return 0;

}
