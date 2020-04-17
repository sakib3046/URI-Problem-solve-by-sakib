//Upper & Lower Latter  By Library function
/*
#include<stdio.h>
main()
{
    char lower,upper;

    printf("Enter The Lower Latter:");
    scanf("%c",&lower);

    upper = toupper(lower);
    printf("The Upper Latter Is:%c",upper);
    getch();
return 0;
}
*/
#include<stdio.h>
main()
{
    char lower,upper;

    printf("Enter The Upper Latter:");
    scanf("%c",&upper);

    lower = tolower(upper);
    printf("The Lower Latter Is:%c",lower);
    getch();
return 0;
}
