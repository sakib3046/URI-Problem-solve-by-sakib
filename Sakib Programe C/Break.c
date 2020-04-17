#include<stdio.h>
int main()
{
	int a,b;
	for(a=1 ;a<=5; a++)
	{
		for(b=1 ;b<=a ; b++)
		{
			printf("*");
			if(b==4)
			break;
		}
		printf("\n");
	}
	printf("Loop Breaked");
}
