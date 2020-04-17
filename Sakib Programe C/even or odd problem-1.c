#include<stdio.h>
main()
{
	int a;
	printf("Enter a number=");
	scanf("%d",&a);
	
	if(a % 2==0)
	{
		printf("\nEven Number");
	}
	else
	{
		printf("\nOdd Number");
	}
	getch();
}
