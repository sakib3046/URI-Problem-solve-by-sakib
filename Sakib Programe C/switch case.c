#include<stdio.h>
main()
{
	int x;
	printf("Enter a or b or c or anything");
	scanfI("%d",&x);
	
	switch(x)
	{
		case 1:
			printf("Thank You");
		default:
			printf("kutter bacha Kotha sunos na ken?");
	}
getch();
}
