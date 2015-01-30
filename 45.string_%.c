#include<stdio.h>


int main()
{
	int m1,m2,d1,d2,y1,y2;

	printf("enter date in the format dd/mm/yy:\n");
	scanf("%d%*c%d%*c%d%*c",&d1,&m1,&y1);

	printf("day = %d month = %d year = %d\n\n",d1,m1,y1);

	return 0;
}
