/*
a=97
A=65
a-A=32
*/
#include<stdio.h>
/*main()
{
    char lower;

    printf("Enter The Lower Character:");
    scanf("%c",&lower);

    printf("The Upper Character Is:%c",lower-32);
    getch();
return 0;
}
*/
#include<stdio.h>
main()
{
    char upper;

    printf("Enter The Upper Character:");
    scanf("%c",&upper);

    printf("The Lower Character Is:%c",upper+32);
    getch();
return 0;
}
