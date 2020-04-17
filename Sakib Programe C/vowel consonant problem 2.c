#include<stdio.h>
main()
{
	char a;
	
	printf("Enter a character =");
	scanf("%c",&a);
	
	if(a =='a' || a=='e' || a=='i' ||a=='o'||a=='u')
	{
		printf("\nit's a vowel'");
	}
	else
	{
		printf("\n\t\t it's a consonant");
	}
getch();
}

